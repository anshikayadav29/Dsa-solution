#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 1, 2, 3};
    int d = 1, sum = accumulate(a.begin(), a.end(), 0);
    int k = (sum + d) / 2;
    vector<int> dp(k+1, 0);
    dp[0] = 1;
    for(int x : a)
        for(int j = k; j >= x; j--)
            dp[j] += dp[j - x];
    cout << dp[k];
}