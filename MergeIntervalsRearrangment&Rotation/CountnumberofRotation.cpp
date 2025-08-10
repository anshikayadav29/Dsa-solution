#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int minVal = INT_MAX, idx = -1;
    for(int i = 0; i < n; i++) {
        if(a[i] < minVal) minVal = a[i], idx = i;
    }
    cout << idx;
}