#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n), res(n);
    for(int &x : a) cin >> x;
    sort(a.begin(), a.end());
    int l = 0, r = n - 1, i = 0;
    while(l <= r) {
        if(i % 2 == 0) res[i++] = a[r--];
        else res[i++] = a[l++];
    }
    for(int x : res) cout << x << " ";
}