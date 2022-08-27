#include <iostream>
using namespace std;

int main() {
    int a[5] = {2, 5, 6, 7, 8};
    int *p = &a[0];
    printf("Current a[0]: %d, current p: %d and current *p: %d\n", a[0], p, *p);
    p = p + 1;
    printf("Current a[1]: %d, current p: %d and current *p: %d\n", a[0], p, *p);
    int *q = a;
    printf("Current q: %d and current *q: %d\n", q, *q);
    q = q + 1;
    printf("Current q: %d and current *q: %d\n", q, *q);
    int b = 10;
    int *r = &b;
    printf("Current b: %d, current r: %d and current *r: %d\n", b, r, *r);
    r = r + 1;
    printf("Current b: %d, current r: %d and current *r: %d\n", b, r, *r);
}