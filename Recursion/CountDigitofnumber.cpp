#include <iostream>
using namespace std;

int countDigits(int n) {
    if (n == 0) return 0;
    return 1 + countDigits(n / 10);
}

int main() {
    cout << countDigits(12345);
    return 0;
}