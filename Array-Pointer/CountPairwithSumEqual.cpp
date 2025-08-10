#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 5, 7, -1, 5};
    int target = 6, count = 0;
    unordered_map<int, int> mp;
    for(int x : a) {
        count += mp[target - x];
        mp[x]++;
    }
    cout << count;
}