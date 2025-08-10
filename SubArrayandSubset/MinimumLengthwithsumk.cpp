#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2, 3, 1, 2, 4, 3};
    int k = 7, i = 0, sum = 0, minLen = INT_MAX;
    for(int j = 0; j < a.size(); j++) {
        sum += a[j];
        while(sum >= k) {
            minLen = min(minLen, j - i + 1);
            sum -= a[i++];
        }
    }
    cout << (minLen == INT_MAX ? 0 : minLen);
}