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
    cout << code("paper");
}