#include <iostream>
using namespace std;

void printReverse(int a[], int n) {
    if (n == 0) return;
    printReverse(a + 1, n - 1);
    cout << a[0] << " ";
}

int main() {
    int a[] = {5, 6, 7};
    printReverse(a, 3);
    return 0;
}