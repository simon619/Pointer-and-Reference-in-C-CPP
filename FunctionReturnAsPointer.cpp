#include <iostream>
using namespace std;

void print() {
    cout << "C++" << endl;
}

int *sum(int *x, int *y) {
    int *c = (int*)malloc(sizeof(int));
    *c = (*x) + (*y);
    return c;
}

int main() {
    int x = 5, y = 6;
    int *p = sum(&x, &y);
    printf("Loaction of p: %d, Pointing at: %d and Value: %d\n", &p, p, *p);
    print();
    cout << *p << endl;
    return 0;
}