#include<bits/stdc++.h>
using namespace std;
int main() {
    string a = "listen", b = "silent";
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    cout << (a == b ? "Anagram" : "Not Anagram");
}