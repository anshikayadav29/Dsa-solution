#include <bits/stdc++.h>
using namespace std;

string reverseString(string s) {
    int i = 0, j = s.size() - 1;
    while(i < j) {
        swap(s[i], s[j]);
        i++;
        j--;
    }
    return s;
}

int main() {
    string s = "Interview";
    cout << reverseString(s);
}