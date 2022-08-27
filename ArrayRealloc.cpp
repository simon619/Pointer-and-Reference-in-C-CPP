#include <iostream>
using namespace std;

int main() {
    cout << "Enter a int number: " <<endl;
    int n;
    cin >> n;
    int *a = (int*)malloc(n * sizeof(int));
    for (int i = 0; i < n; i++) {
        *(a + i) = i;
    }
    printf("Base Address p pointing at: %d and Value of p: %d and Loaction of p: %d\n", a + 0, *(a + 0), &a + 0);
    printf("Last index p pointing at: %d and Value of p: %d and Loaction of p: %d\n", a + n - 1, *(a + (n - 1)), &a + (n - 1));

    for (int j = 0; j < n; j++) {
        cout << *(a + j) << endl;
    }
    int m = 2 * n;
    int *b = (int*)realloc(a, m * sizeof(int));

    printf("Base Address p pointing at: %d and Value of p: %d and Loaction of p: %d\n", b + 0, *(b + 0), &b + 0);
    printf("Last index p pointing at: %d and Value of p: %d and Loaction of p: %d\n", b + m - 1, *(b + (m - 1)), &b + (m - 1));

    for (int k = 0; k < m; k++) {
        cout << *(b + k) << endl;
    }    

}