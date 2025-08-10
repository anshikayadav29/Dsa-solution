#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i += k) {
        int l = i, r = min(i + k - 1, n - 1);
        while(l < r) swap(a[l++], a[r--]);
    }
    for(int x : a) cout << x << " ";
}