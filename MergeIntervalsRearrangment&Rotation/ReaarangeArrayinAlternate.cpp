#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n), pos, neg;
    for(int &x : a) cin >> x;
    for(int x : a) x >= 0 ? pos.push_back(x) : neg.push_back(x);
    int i = 0, j = 0, k = 0;
    while(i < pos.size() && j < neg.size())
        a[k++] = (k % 2 == 0) ? pos[i++] : neg[j++];
    while(i < pos.size()) a[k++] = pos[i++];
    while(j < neg.size()) a[k++] = neg[j++];
    for(int x : a) cout << x << " ";
}