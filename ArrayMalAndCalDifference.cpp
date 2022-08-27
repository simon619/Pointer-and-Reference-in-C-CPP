#include <iostream>
using namespace std;

int main() {

    int n = 5;
    cout << "Malloc: " << endl;
    int *a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        cout << *(a + i) << " "; // Garbage Value without initiallization
    }
    cout << endl;
    cout << "Calloc: " << endl;
    int *b = (int*)calloc(n, sizeof(int));
    for (int j = 0; j < n; j++) {
        cout << *(b + j) << " "; // 0 Value without initiallization
    }
}