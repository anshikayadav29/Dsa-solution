#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {3, 1, 2};
    int n = a.size();
    set<vector<int>> s;
    for(int i = 0; i < (1 << n); i++) {
        vector<int> temp;
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) temp.push_back(a[j]);
        sort(temp.begin(), temp.end());
        s.insert(temp);
    }
    for(auto x : s) {
        for(int y : x) cout << y << " ";
        cout << endl;
    }
}