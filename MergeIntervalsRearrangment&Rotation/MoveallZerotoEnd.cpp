#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int j = 0;
    for(int i = 0; i < n; i++)
        if(a[i] != 0) a[j++] = a[i];
    while(j < n) a[j++] = 0;
    for(int x : a) cout << x << " ";
}