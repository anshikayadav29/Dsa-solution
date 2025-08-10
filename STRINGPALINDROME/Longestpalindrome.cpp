#include <iostream>
using namespace std;

string longestPalindrome(string s) {
    int n = s.size(), start = 0, maxLen = 1;
    for (int i = 0; i < n;) {
        int l = i, r = i;
        while (r + 1 < n && s[r] == s[r + 1]) r++;
        i = r + 1;
        while (l > 0 && r < n - 1 && s[l - 1] == s[r + 1]) l--, r++;
        if (r - l + 1 > maxLen)
            start = l, maxLen = r - l + 1;
    }
    return s.substr(start, maxLen);
}

int main() {
    string s = "babad";
    cout << longestPalindrome(s);
}