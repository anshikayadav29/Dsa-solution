#include <iostream>
using namespace std;

bool isPal(string s, int l, int r) {
    if (l >= r) return true;
    return s[l] == s[r] && isPal(s, l + 1, r - 1);
}

int main() {
    string s = "madam";
    cout << isPal(s, 0, s.length() - 1);
}