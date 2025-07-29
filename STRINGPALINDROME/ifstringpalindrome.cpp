#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    int i = 0, j = s.size() - 1;
    while (i < j)
        if (s[i++] != s[j--]) return false;
    return true;
}

int main() {
    string s = "madam";
    cout << (isPalindrome(s) ? "Yes" : "No");
}