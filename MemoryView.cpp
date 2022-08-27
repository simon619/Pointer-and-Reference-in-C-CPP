#include <iostream>
using namespace std;

int main() {
    int a = 10;
    int *p = &a;
    cout << "a: " << a << endl;
    cout << "adress of a: " << p << endl;
    cout << "adress of location after a: " << p + 1 << endl;
    cout << "adress of location after a: " << p + 2 << endl;
    cout << "value there: " << *(p + 2) << endl;
    return 0;
}