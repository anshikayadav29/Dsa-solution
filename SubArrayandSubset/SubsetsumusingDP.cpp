#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int sum = 4, n = a.size();
    vector<vector<bool>> dp(n+1, vector<bool>(sum+1, false));
    for(int i = 0; i <= n; i++) dp[i][0] = true;
    for(int i = 1; i <= n; i++)
        for(int j = 1; j <= sum; j++)
            dp[i][j] = dp[i-1][j] || (j >= a[i-1] && dp[i-1][j - a[i-1]]);
    cout << (dp[n][sum] ? "Yes" : "No");
}