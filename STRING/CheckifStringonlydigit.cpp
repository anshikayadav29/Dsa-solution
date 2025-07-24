#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "12345";
    cout << (all_of(s.begin(), s.end(), ::isdigit) ? "Yes" : "No");
}