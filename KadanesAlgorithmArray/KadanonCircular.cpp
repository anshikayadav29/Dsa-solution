#include<bits/stdc++.h>
using namespace std;

int kadane(vector<int>& a) {
    int sum = 0, maxSum = INT_MIN;
    for (int x : a) {
        sum = max(x, sum + x);
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}

int main() {
    vector<int> a = {8, -1, 3, 4};
    int normal = kadane(a);
    int total = 0;
    for (int i = 0; i < a.size(); i++) {
        total += a[i];
        a[i] = -a[i];
    }
    int circular = total + kadane(a);
    cout << max(normal, circular);
}