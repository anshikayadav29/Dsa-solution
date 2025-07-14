#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int l = 0, r = n - 1;
    while(l < r){
        if(a[l] == 1 && a[r] == 0) swap(a[l], a[r]);
        if(a[l] == 0) l++;
        if(a[r] == 1) r--;
    }
    for(int x : a) cout << x << " ";
}