#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "aabbcde";
    unordered_map<char, int> mp;
    for(char c : s) mp[c]++;
    for(char c : s)
        if(mp[c] == 1) { cout << c; break; }
}