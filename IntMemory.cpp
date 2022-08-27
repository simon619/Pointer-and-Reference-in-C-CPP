#include <iostream>
using namespace std;

int main() {
    int a = 4112;
    printf("Size of data %d\n", sizeof(a));
    int *p = &a;
    printf("Address: %d and value: %d\n", p, *p);
    printf("Address: %d and value: %d\n", p + 1, *(p + 1));
    char *p0 = (char*)p;
    printf("Size of data %d\n", sizeof(*p0));
    printf("Address: %d and value: %d\n", p0, *p0);
    printf("Address: %d and value: %d\n", (p0 + 1), *(p0 + 1)); 
    cout << (int)p << endl;
    return 0;
}