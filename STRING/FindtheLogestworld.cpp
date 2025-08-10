#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "C++ is powerful";
    stringstream ss(s);
    string word, ans = "";
    while(ss >> word)
        if(word.size() > ans.size()) ans = word;
    cout << ans;
}