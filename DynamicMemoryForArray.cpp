#include <iostream>
using namespace std;

int main() {
    int a;
    int *p = new int;
    *p = 15;
    printf("Location of p pointing at: %d and Value of p: %d and Loaction of p: %d\n", p, *p, &p);
    delete p;
    p = new int[5]{1, 5, 2, 9, 89};
    // int b[5] = {1, 5, 2, 9, 89};
    // *p = b;
    printf("Location of p pointing at: %d and Value of p: %d and Loaction of p: %d\n", p, *p, &p);
}