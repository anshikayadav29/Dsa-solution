#include <iostream>
using namespace std;

void binary(int n) {
    if (n == 0) return;
    binary(n / 2);
    cout << n % 2;
}

int main() {
    binary(10);
    return 0;
}