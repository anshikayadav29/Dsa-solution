#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "a b c", res = "";
    for(char c : s)
        res += (c == ' ' ? "%20" : string(1, c));
    cout << res;
}