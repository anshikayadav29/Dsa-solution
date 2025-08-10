#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "a b c d", res = "";
    for(char c : s) if(c != ' ') res += c;
    cout << res;
}