#include <iostream>
using namespace std;

void printAll(int a[], int n) {
    if (n == 0) return;
    cout << a[0] << " ";
    printAll(a + 1, n - 1);
}

int main() {
    int a[] = {5, 6, 7};
    printAll(a, 3);
    return 0;
}