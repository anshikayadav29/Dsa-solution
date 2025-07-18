#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    map<int, int> freq;
    for(int i = 0, x; i < n; i++) {
        cin >> x;
        freq[x]++;
    }
    int ans = -1, val = 0;
    for(auto [x, f] : freq) {
        if(f > val || (f == val && x < ans)) {
            val = f;
            ans = x;
        }
    }
    cout << ans;
}