#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "aaaaa";
    cout << (all_of(s.begin(), s.end(), [&](char c){ return c == s[0]; }) ? "Yes" : "No");
}