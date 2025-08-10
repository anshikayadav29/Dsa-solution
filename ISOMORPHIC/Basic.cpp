#include <bits/stdc++.h>
using namespace std;

bool iso(string s, string t) {
    char m1[256] = {}, m2[256] = {};
    for (int i = 0; i < s.size(); i++) {
        if (m1[s[i]] != m2[t[i]]) return 0;
        m1[s[i]] = m2[t[i]] = i + 1;
    }
    return 1;
}

int main() {
    cout << iso("egg", "add");
}