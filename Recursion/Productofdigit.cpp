#include <iostream>
using namespace std;

int product(int n) {
    if (n < 10) return n;
    return (n % 10) * product(n / 10);
}

int main() {
    cout << product(1234);
    return 0;
}