#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    rotate(a.begin(), a.begin() + k % n, a.end());
    for(int x : a) cout << x << " ";
}