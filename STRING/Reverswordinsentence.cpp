#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "I love coding", word, res = "";
    stringstream ss(s);
    vector<string> words;
    while(ss >> word) words.push_back(word);
    reverse(words.begin(), words.end());
    for(string w : words) res += w + " ";
    cout << res;
}