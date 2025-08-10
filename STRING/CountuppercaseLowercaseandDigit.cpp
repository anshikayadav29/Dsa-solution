#include<bits/stdc++.h>
using namespace std;
int main() {
    string s = "AbC123";
    int u=0, l=0, d=0;
    for(char c : s) {
        if(isupper(c)) u++;
        else if(islower(c)) l++;
        else if(isdigit(c)) d++;
    }
    cout << u << " " << l << " " << d;
}