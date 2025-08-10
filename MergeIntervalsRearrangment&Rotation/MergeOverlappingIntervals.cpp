#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<vector<int>> intervals(n);
    for(int i = 0; i < n; i++) {
        int x, y; cin >> x >> y;
        intervals[i] = {x, y};
    }
    sort(intervals.begin(), intervals.end());
    vector<vector<int>> merged;
    for(auto interval : intervals) {
        if(merged.empty() || merged.back()[1] < interval[0])
            merged.push_back(interval);
        else
            merged.back()[1] = max(merged.back()[1], interval[1]);
    }
    for(auto i : merged) cout << i[0] << " " << i[1] << "\n";
}