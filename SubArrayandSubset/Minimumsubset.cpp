#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 6, 11, 5};
    int sum = accumulate(a.begin(), a.end(), 0);
    int n = a.size();
    vector<vector<bool>> dp(n+1, vector<bool>(sum/2+1, false));
    for(int i = 0; i <= n; i++) dp[i][0] = true;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= sum/2; j++)
            dp[i][j] = dp[i-1][j] || (j >= a[i-1] && dp[i-1][j-a[i-1]]);
    int ans = INT_MAX;
    for(int j = sum/2; j >= 0; j--)
        if(dp[n][j]) {
            ans = sum - 2*j;
            break;
        }
    cout << ans;
}