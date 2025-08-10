#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n), res(n);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());
    int l = 0, r = n - 1;
    for(int i = 0; i < n; i++) {
        res[i] = (i % 2 == 0) ? a[r--] : a[l++];
    }
    for(int x : res) cout << x << " ";
}