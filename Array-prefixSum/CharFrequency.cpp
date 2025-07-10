#include<bits/stdc++.h>
using namespace std;

int main() {
    string s = "aaabbb";
    vector<int> freq(s.size());
    freq[0] = (s[0] == 'a');
    for(int i = 1; i < s.size(); i++)
        freq[i] = freq[i-1] + (s[i] == 'a');
    cout << freq.back();
}