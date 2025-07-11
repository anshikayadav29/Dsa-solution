#include <iostream>
using namespace std;

int binpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b >>= 1;
    }
    return res;
}

int main() {
    cout << binpow(2, 10);
}   