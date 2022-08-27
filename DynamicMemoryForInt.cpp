#include <iostream>
using namespace std;

int main() {
    int a;
    int *p = (int*)malloc(sizeof(int));
    *p = 15;
    printf("Location of p pointing at: %d and Value of p: %d and Loaction of p: %d\n", p, *p, &p);
    free(p);
    p = (int*)malloc(sizeof(int));
    *p = 30; 
    printf("Location of p pointing at: %d and Value of p: %d and Loaction of p: %d\n", p, *p, &p);
    return 0;
}