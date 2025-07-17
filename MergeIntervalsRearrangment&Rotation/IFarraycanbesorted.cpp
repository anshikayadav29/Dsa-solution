#include<bits/stdc++.h>
using namespace std;
bool canBeSorted(vector<int>& a) {
    int n = a.size(), count = 0;
    for(int i = 0; i < n; i++)
        if(a[i] > a[(i + 1) % n]) count++;
    return count <= 1;
}
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    cout << (canBeSorted(a) ? "Yes" : "No");
}