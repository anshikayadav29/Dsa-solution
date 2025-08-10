#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    unordered_set<int> s;
    for(int i = 0, x; i < n; i++) cin >> x, s.insert(x);
    for(int i = 1; ; i++) {
        if(s.find(i) == s.end()) {
            cout << i;
            break;
        }
    }
}