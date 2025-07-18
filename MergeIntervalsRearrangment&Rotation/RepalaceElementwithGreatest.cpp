#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int maxR = -1;
    for(int i = n - 1; i >= 0; i--) {
        int tmp = a[i];
        a[i] = maxR;
        maxR = max(maxR, tmp);
    }
    for(int x : a) cout << x << " ";
}