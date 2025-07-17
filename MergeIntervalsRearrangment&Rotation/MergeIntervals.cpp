#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<pair<int,int>> a(n);
    for(int i = 0; i < n; i++) cin >> a[i].first >> a[i].second;
    sort(a.begin(), a.end());
    vector<pair<int,int>> res;
    for(auto [s,e] : a) {
        if(res.empty() || res.back().second < s)
            res.push_back({s, e});
        else
            res.back().second = max(res.back().second, e);
    }
    for(auto [s,e] : res) cout << s << " " << e << "\n";
}