#include <iostream>
using namespace std;

bool isArmstrong(int n) {
    int orig = n, sum = 0;
    while (n) {
        int d = n % 10;
        sum += d * d * d;
        n /= 10;
    }
    return sum == orig;
}

int main() {
    cout << isArmstrong(153);
}