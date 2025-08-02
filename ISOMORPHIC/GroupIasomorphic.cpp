#include <bits/stdc++.h>
using namespace std;

string code(string s) {
    unordered_map<char, int> m;
    string res = "";
    for (char c : s)
        res += to_string(m[c] = m.count(c) ? m[c] : m.size()) + ".";
    return res;
}

int main() {
    vector<string> v = {"foo", "bar", "egg", "add"};
    unordered_map<string, vector<string>> g;
    for (string w : v) g[code(w)].push_back(w);
    for (auto [_, vec] : g) {
        for (string w : vec) cout << w << " ";
        cout << endl;
    }
}