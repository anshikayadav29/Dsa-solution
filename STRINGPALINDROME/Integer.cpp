#include <iostream>
using namespace std;

bool isIntPalindrome(int x) {
    string s = to_string(x);
    return s == string(s.rbegin(), s.rend());
}

int main() {
    int x = 121;
    cout << (isIntPalindrome(x) ? "Yes" : "No");
}