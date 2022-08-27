#include <iostream>
using namespace std;

int sum(int *x, int *y) {
    return *x + *y;
}

void print(char *name) {
    printf("Name: %s\n", name);
}

int main() {
    int x = 7, y = 8;
    int (*p1)(int*, int*) = &sum; // &sum == sum
    int c = (*p1)(&x, &y); // *p == p
    cout << c << endl;
    void (*p2)(char*) = &print;
    (*p2)("Simon");
    return 0;
}