#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 4;
    vector<int> dp(n+2, 0);
    dp[0] = 1; dp[1] = 2;
    for(int i = 2; i < n; i++)
        dp[i] = dp[i-1] + dp[i-2];
    cout << dp[n-1];
}