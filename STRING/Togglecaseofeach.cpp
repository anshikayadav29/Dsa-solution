#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "HeLLo";
    for(char &c : s)
        c = islower(c) ? toupper(c) : tolower(c);
    cout << s;
}