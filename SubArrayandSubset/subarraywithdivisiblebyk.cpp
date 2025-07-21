#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {4, 5, 0, -2, -3, 1};
    int k = 5, sum = 0, count = 0;
    map<int, int> mp;
    mp[0] = 1;
    for(int x : a) {
        sum += x;
        int rem = ((sum % k) + k) % k;
        count += mp[rem];
        mp[rem]++;
    }
    cout << count;
}