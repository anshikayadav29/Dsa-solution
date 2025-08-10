#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "a1b2c3", res = "";
    for(char c : s)
        if(!isdigit(c)) res += c;
    cout << res;
}