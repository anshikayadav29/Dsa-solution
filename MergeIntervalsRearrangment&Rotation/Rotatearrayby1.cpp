#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int last = a[n - 1];
    for(int i = n - 1; i > 0; i--) a[i] = a[i - 1];
    a[0] = last;
    for(int x : a) cout << x << " ";
}