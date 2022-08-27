#include <iostream>
using namespace std;

void simon() {
    cout << "My name is Simon" <<endl;
}

void callSimon(void (*p)()) {
    p();
}

int main() {
    void (*p)() = &simon;
    callSimon(p);
}