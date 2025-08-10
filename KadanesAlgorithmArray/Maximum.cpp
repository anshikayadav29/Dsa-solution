#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = 0, maxSum = INT_MIN;
    for(int x : a) {
        sum = max(x, sum + x);
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}