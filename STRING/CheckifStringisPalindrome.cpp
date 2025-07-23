#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "madam";
    string t = s;
    reverse(t.begin(), t.end());
    cout << (s == t ? "Palindrome" : "Not Palindrome");
}