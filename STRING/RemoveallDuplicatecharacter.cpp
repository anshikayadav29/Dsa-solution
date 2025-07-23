#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "programming", res = "";
    unordered_set<char> seen;
    for(char c : s)
        if(!seen.count(c)) res += c, seen.insert(c);
    cout << res;
}