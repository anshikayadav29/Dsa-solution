#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n), res;
    for(int &x : a) cin >> x;
    int maxR = INT_MIN;
    for(int i = n - 1; i >= 0; i--) {
        if(a[i] > maxR) res.push_back(a[i]), maxR = a[i];
    }
    reverse(res.begin(), res.end());
    for(int x : res) cout << x << " ";
}