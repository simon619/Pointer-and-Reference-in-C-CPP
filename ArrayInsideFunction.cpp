#include <iostream>
using namespace std;

int func(int *a, int size) {
    int sum = 0;
    cout << "Size: " << size << endl;
    for (int i = 0; i < size; i++) {
        sum += a[i];
    }
    return sum;
}

int main() {
    int a[5] = {2, 5, 6, 7, 8};
    int size = sizeof(a)/sizeof(a[0]);
    int sum = func(a, size);
    cout << sum << endl;

}