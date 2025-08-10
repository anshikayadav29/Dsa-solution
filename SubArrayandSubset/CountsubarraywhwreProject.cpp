#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {10, 5, 2, 6};
    int k = 100, prod = 1, i = 0, ans = 0;
    for(int j = 0; j < a.size(); j++) {
        prod *= a[j];
        while(i <= j && prod >= k) prod /= a[i++];
        ans += j - i + 1;
    }
    cout << ans;
}