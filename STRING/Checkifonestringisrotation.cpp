#include<bits/stdc++.h>
using namespace std;
int main() {
    string s1 = "abcde", s2 = "cdeab";
    cout << ((s1.size() == s2.size() && (s1 + s1).find(s2) != string::npos) ? "Yes" : "No");
}