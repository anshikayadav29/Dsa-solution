#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "banana";
    map<char,int> m;
    for(char c : s) m[c]++;
    for(auto [c,f] : m) cout << c << ": " << f << "\n";
}