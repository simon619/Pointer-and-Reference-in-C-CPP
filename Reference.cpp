#include<iostream>
#include<vector>
using namespace std;

void func1(int &x) {   // This allows to use d without holding another space in mem
    x++;
}

void func2(vector<int> &x) {
    x[0] = 100;
}

int main() {
    int a = 10;
    int &b = a;
    // a and b are gives same value
    cout << "Value => " << "a: " << a << " b: " << b << endl;
    // &a and &b holds the address of the variable
    cout << "Address => " << "a: " << &a << " b: " << &b << endl;
    // It also change the value of b
    a = 20;
    cout << "Value => " << "a: " << a << " b: " << b << endl;
    // This changes value of a and b  
    int c = 100;
    b = c;
    cout << "Value => " << "a: " << a << " b: " << b << endl;
    int d = 120;
    cout << "Before Passing: " << d << endl;
    func1(d);
    cout << "After Passing: " << d << endl;
    //Apply this on vector
    vector<int> v = {10, 20, 30, 56, 60, 70, 5};
    cout << "Before First index value: " << v[0] << endl;
    func2(v);
    cout << "After First index value: " << v[0] << endl;
    return 0;
}