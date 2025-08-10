#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n), temp(n);
    for(int &x : a) cin >> x;
    for(int i = 0; i < n; i++) temp[(i + k) % n] = a[i];
    for(int x : temp) cout << x << " ";
}
