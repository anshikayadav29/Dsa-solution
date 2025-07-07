#include <iostream>
using namespace std;

bool isPalindrome(int n) {
    int rev = 0, orig = n;
    while (n) {
        rev = rev * 10 + n % 10;
        n /= 10;
    }
    return rev == orig;
}

int main() {
    cout << isPalindrome(121);
}