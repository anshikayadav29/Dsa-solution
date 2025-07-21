#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int k = 3, n = a.size();
    vector<vector<int>> dp(n+1, vector<int>(k+1, 0));
    dp[0][0] = 1;
    for(int i = 1; i <= n; i++)
        for(int j = 0; j <= k; j++)
            dp[i][j] = dp[i-1][j] + (j >= a[i-1] ? dp[i-1][j - a[i-1]] : 0);
    cout << dp[n][k];
}