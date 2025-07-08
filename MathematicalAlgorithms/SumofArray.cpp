#include <iostream>
using namespace std;

int sum(int a[], int n) {
    if (n == 0) return 0;
    return a[0] + sum(a + 1, n - 1);
}

int main() {
    int a[] = {1, 2, 3};
    cout << sum(a, 3);
    return 0;
}