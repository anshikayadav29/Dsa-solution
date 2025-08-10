#include <bits/stdc++.h>
using namespace std;

bool reversibleIso(string s, string t) {
    unordered_map<char, char> fwd, rev;
    for (int i = 0; i < s.size(); i++) {
        if (fwd[s[i]] && fwd[s[i]] != t[i]) return 0;
        if (rev[t[i]] && rev[t[i]] != s[i]) return 0;
        fwd[s[i]] = t[i], rev[t[i]] = s[i];
    }
    return 1;
}

int main() {
    cout << reversibleIso("title", "paper");
}