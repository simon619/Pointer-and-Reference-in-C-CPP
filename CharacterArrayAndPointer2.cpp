#include <iostream>
using namespace std;

void func(char *c) {
    while (*c != '\0') {
        cout << *c << "\n" << endl;
        c = c + 1;
    }
}

int main() {
    char c[] = "Simon";
    func(c);
} 