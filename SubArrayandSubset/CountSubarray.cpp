#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, -1, 2, -2, 3};
    map<int, int> mp;
    int sum = 0, count = 0;
    mp[0] = 1;
    for(int x : a) {
        sum += x;
        count += mp[sum];
        mp[sum]++;
    }
    cout << count;
}