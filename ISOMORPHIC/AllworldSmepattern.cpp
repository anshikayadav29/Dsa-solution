#include <bits/stdc++.h>
using namespace std;

string code(string s) {
    unordered_map<char, int> m;
    string r = "";
    for (char c : s) r += to_string(m[c] = m.count(c) ? m[c] : m.size()) + ".";
    return r;
}

int main() {
    vector<string> v = {"abc", "def", "xyz"};
    string ref = code(v[0]);
    for (string s : v)
        if (code(s) != ref) { cout << "No"; return 0; }
    cout << "Yes";
}