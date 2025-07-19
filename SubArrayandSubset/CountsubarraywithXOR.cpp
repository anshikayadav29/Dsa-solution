#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {4, 2, 2, 6, 4};
    int k = 6, xorSum = 0, count = 0;
    map<int, int> mp;
    for(int x : a) {
        xorSum ^= x;
        if(xorSum == k) count++;
        count += mp[xorSum ^ k];
        mp[xorSum]++;
    }
    cout << count;
}