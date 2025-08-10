#include<bits/stdc++.h>
using namespace std;
void mergeArrays(vector<int>& a, vector<int>& b) {
    int n = a.size(), m = b.size(), i = n - 1, j = 0;
    while(i >= 0 && j < m && a[i] > b[j])
        swap(a[i--], b[j++]);
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
}
int main() {
    int n, m; cin >> n >> m;
    vector<int> a(n), b(m);
    for(int &x : a) cin >> x;
    for(int &x : b) cin >> x;
    mergeArrays(a, b);
    for(int x : a) cout << x << " ";
    for(int x : b) cout << x << " ";
}