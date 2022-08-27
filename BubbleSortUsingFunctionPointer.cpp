#include <iostream>
using namespace std;

int compare(int *x, int *y) {
    return (*x > *y) ? 1 : -1;  
}

void BubbleSort(int *a, int size, int (*compare)(int*, int*)) {
    int temp;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1; j++) {
            if(compare((a + j), (a + (j + 1))) > 0) {
                temp = *(a + j);
                *(a + j) = *(a + (j + 1));
                *(a + (j + 1)) = temp;
            }
        }
    }
}

int main() {
    int a[5] = {5, 1, 3, 6, 2};
    BubbleSort(a, 5, &compare);
    for (int k = 0; k < 5; k++) {
        cout << a[k] <<endl;
    }
}