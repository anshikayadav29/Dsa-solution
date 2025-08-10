#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "C++ is awesome";
    stringstream ss(s);
    string word; int count = 0;
    while(ss >> word) count++;
    cout << count;
}