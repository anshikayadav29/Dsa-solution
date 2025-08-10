#include <iostream>
using namespace std;

int gcd(int a, int b) {
    while (b) {
        int t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main() {
    cout << gcd(24, 36);
}