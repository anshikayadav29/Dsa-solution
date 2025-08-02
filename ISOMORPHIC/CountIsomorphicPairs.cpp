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
    vector<string> v = {"foo", "app", "bar", "egg"};
    unordered_map<string, int> mp;
    for (string w : v) mp[code(w)]++;
    int c = 0;
    for (auto [_, x] : mp) c += x * (x - 1) / 2;
    cout << c;
}