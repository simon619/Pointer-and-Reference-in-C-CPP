#include <iostream>
#include <string.h>
using namespace std;

void func(char *c, int *size) {
    for (int i = 0; i < *size; i++) {
        cout << c[i] << endl;
    }

}

int main() {
    // char c[7];
    // c[0] = 'S';
    // c[1] = 'i';
    // c[2] = 'm';
    // c[3] = 'o';
    // c[4] = 'n';
    // c[5] = '\0';
    char c[] = "Simon";
    int len = strlen(c);
    printf("size: %d\n", len);
    cout << "Lenght: " << c << endl;
    int size = sizeof(c);
    cout << "Size: " << size << endl;
    func(c, &size);
    return 0;
    }