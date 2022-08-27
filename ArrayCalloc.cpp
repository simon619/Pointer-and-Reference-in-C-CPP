#include <iostream>
using namespace std;

int main() {
    cout << "Enter a int number: " <<endl;
    int n;
    cin >> n;
    int *a = (int*)calloc(n, sizeof(int));
    for (int i = 0; i < n; i++) {
        *(a + i) = i;
    }
    for (int j = 0; j < n; j++) {
        cout << *(a + j) << " ";
    }
}