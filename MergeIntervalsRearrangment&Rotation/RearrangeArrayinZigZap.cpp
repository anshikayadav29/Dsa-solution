#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    for(int i = 0; i < n - 1; i++) {
        if(i % 2 == 0 && a[i] > a[i + 1]) swap(a[i], a[i + 1]);
        else if(i % 2 == 1 && a[i] < a[i + 1]) swap(a[i], a[i + 1]);
    }
    for(int x : a) cout << x << " ";
}