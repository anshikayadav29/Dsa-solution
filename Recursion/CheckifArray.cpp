#include <iostream>
using namespace std;

bool isSorted(int a[], int n) {
    if (n <= 1) return true;
    return a[0] <= a[1] && isSorted(a + 1, n - 1);
}

int main() {
    int a[] = {1, 2, 3, 4};
    cout << isSorted(a, 4);
    return 0;
}