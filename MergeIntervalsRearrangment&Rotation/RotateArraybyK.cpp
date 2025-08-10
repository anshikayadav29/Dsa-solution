#include<bits/stdc++.h>
using namespace std;
void rotateRight(vector<int>& a, int k) {
    int n = a.size();
    k = k % n;
    reverse(a.begin(), a.end());
    reverse(a.begin(), a.begin() + k);
    reverse(a.begin() + k, a.end());
}
int main() {
    int n, k; cin >> n >> k;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    rotateRight(a, k);
    for(int x : a) cout << x << " ";
}