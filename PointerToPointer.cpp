#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    *p = 15;
    printf("Current a: %d and current &a: %d\n", a, &a);
    printf("Current p: %d, current *p: %d and current &p: %d\n", p, *p, &p);
    int **q = &p;
    printf("Current q: %d, current *q: %d, current **q: %d and current &q: %d\n", q, *q, *(*q), &q);
    int ***r = &q;
    printf("Current r: %d, current *r: %d, current **r: %d, current ***r: %d and current &r: %d\n", r, *r, *(*r), *(*(*r)), &r);
    return 0;
}