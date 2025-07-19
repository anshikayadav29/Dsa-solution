#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3, 1, 1, 1, 1};
    int k = 3, sum = 0, ans = 0;
    map<int, int> mp;
    for(int i = 0; i < a.size(); i++) {
        sum += a[i];
        if(sum == k) ans = i + 1;
        if(mp.count(sum - k)) ans = max(ans, i - mp[sum - k]);
        if(!mp.count(sum)) mp[sum] = i;
    }
    cout << ans;
}