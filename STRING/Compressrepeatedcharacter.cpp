#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "aaabb", res = "";
    for(int i = 0; i < s.size();) {
        int j = i;
        while(j < s.size() && s[i] == s[j]) j++;
        res += s[i] + to_string(j - i);
        i = j;
    }
    cout << res;
}