#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0, orig = n;
    while (n > 0) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == orig;
}

int main() {
    int num = 121;
    cout << (isPalindrome(num) ? "Yes" : "No") << endl;
}