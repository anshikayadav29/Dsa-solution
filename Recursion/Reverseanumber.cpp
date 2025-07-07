#include <iostream>
using namespace std;

int reverseNum(int n, int r = 0) {
    if (n == 0) return r;
    return reverseNum(n / 10, r * 10 + n % 10);
}

int main() {
    cout << reverseNum(1234);
    return 0;
}