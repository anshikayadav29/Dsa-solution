#include <iostream>
#include <vector>
using namespace std;

int lps(string s) {
    int n = s.size();
    vector<vector<int>> dp(n, vector<int>(n));
    for (int i = 0; i < n; i++) dp[i][i] = 1;
    for (int len = 2; len <= n; len++) {
        for (int i = 0; i <= n - len; i++) {
            int j = i + len - 1;
            if (s[i] == s[j]) dp[i][j] = 2 + dp[i + 1][j - 1];
            else dp[i][j] = max(dp[i + 1][j], dp[i][j - 1]);
        }
    }
    return dp[0][n - 1];
}

int main() {
    string s = "bbabcbcab";
    cout << lps(s); // Output: 7
}