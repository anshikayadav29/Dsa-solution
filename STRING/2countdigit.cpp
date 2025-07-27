#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "ab12cd34";
    int count = 0;
    for(char c : s) if(isdigit(c)) count++;
    cout << count;
}