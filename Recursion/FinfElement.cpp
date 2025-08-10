#include <iostream>
using namespace std;

bool find(int a[], int n, int x) {
    if (n == 0) return false;
    return a[0] == x || find(a + 1, n - 1, x);
}

int main() {
    int a[] = {4, 7, 9};
    cout << find(a, 3, 7);
    return 0;
}