#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 1, 1};
    int k = 2, sum = 0, count = 0;
    unordered_map<int, int> mp;
    mp[0] = 1;
    for(int x : a) {
        sum += x;
        count += mp[sum - k];
        mp[sum]++;
    }
    cout << count;
}