#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "Hello, world!", res = "";
    for(char c : s)
        if(!ispunct(c)) res += c;
    cout << res;
}