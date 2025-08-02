#include <bits/stdc++.h>
using namespace std;

string code(string s) {
    unordered_map<char, int> m;
    string r = "";
    for (char c : s) r += to_string(m[c] = m.count(c) ? m[c] : m.size()) + ".";
    return r;
}

bool match(string s, string pat) {
    return code(s) == code(pat);
}

int main() {
    cout << match("noon", "deed");
}