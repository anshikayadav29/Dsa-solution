#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "beautiful", res = "";
    for(char c : s)
        if(string("aeiou").find(c) == -1) res += c;
    cout << res;
}