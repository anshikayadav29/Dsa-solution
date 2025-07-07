#include <iostream>
using namespace std;

int findMax(int a[], int n) {
    if (n == 1) return a[0];
    int m = findMax(a, n - 1);
    return a[n - 1] > m ? a[n - 1] : m;
}

int main() {
    int a[] = {4, 9, 3, 7};
    cout << findMax(a, 4);
    return 0;
}