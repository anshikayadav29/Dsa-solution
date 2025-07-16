#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int count = 0;
    for(int i = 0; i < n; i++)
        if(a[i] > a[(i + 1) % n]) count++;
    cout << (count <= 1 ? "Yes" : "No");
}