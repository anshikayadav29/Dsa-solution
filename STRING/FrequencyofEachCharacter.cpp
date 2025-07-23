#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "apple";
    map<char, int> mp;
    for(char c : s) mp[c]++;
    for(auto [c,f] : mp) cout << c << ": " << f << "\n";
}