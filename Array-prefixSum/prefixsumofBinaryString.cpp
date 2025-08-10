#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "10101";
    vector<int> p(s.size());
    p[0] = s[0] - '0';
    for(int i = 1; i < s.size(); i++) p[i] = p[i-1] + (s[i] - '0');
    for(int x : p) cout << x << " ";
}