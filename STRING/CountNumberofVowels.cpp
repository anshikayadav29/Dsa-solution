#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "education";
    int count = 0;
    for(char c : s)
        if(string("aeiou").find(c) != -1) count++;
    cout << count;
}