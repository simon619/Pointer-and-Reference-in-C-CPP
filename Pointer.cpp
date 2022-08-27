#include <iostream>
#include <vector>
using namespace std;

void func(int *d) {
    *d = *d + 1;
}

int main() {
    int a = 5;
    int *b = &a;
    // a and *b are give same value
    cout << "Value => " << "a: " << a << " *b: " << *b << endl;
    // &a and b are give same address
    cout << "Address => " << "&a: " << &a << " b: " << b << endl;
    // Change pointer, currently b points c 
    int c = 15;
    b = &c;
    cout << "Value => " << "a: " << a << " *b: " << *b << endl; //b does not point a anymore
    // Change c's value by reference
    cout << "Before Passing: " << c << endl;
    *b = 100;
    cout << "After Passing: " << c << endl;
    //Calling Function
    int d = 10;
    cout << "Before Passing: " << d << endl;
    func(&d);
    cout << "After Passing: " << d << endl;
}