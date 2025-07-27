#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "the quick brown fox jumps over the lazy dog";
    set<char> st;
    for(char c : s)
        if(isalpha(c)) st.insert(tolower(c));
    cout << (st.size() == 26 ? "Pangram" : "Not Pangram");
}