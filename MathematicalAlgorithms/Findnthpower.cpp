#include <iostream>
using namespace std;

int power2(int n) {
    if (n == 0) return 1;
    return 2 * power2(n - 1);
}

int main() {
    cout << power2(4);
    return 0;
}