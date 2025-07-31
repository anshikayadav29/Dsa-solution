#include <iostream>
using namespace std;

int countSubstrings(string s) {
    int n = s.size(), count = 0;
    for (int center = 0; center < 2 * n - 1; center++) {
        int l = center / 2, r = l + center % 2;
        while (l >= 0 && r < n && s[l] == s[r]) {
            count++; l--; r++;
        }
    }
    return count;
}

int main() {
    string s = "aaa";
    cout << countSubstrings(s);  // 6
}

