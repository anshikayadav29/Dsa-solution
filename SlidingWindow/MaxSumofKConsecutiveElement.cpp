#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 4, 2, 10, 2};
    int k = 3, sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    int maxSum = sum;
    for(int i = k; i < a.size(); i++) {
        sum += a[i] - a[i - k];
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}