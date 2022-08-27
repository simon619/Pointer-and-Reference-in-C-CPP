#include <iostream>
using namespace std;

void func(int (*a)[3], int *m) { // int a[][3] ==  int (*a)[3]
    for (int i = 0;  i < *m; i++) {
        for (int j = 0;  j < 3; j++) {
            cout << *(*(a + i) + j) << endl;
        }
    }
}

int main() {
    int m = 2; 
    int a[m][3] = {{2, 8, 9}, {1, 5, 7}};
    func(a, &m);
    return 0;
}