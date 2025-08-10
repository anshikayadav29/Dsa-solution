#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, 2, 1, 4, 6};
    int k = 3, sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    int minSum = sum;
    for(int i = k; i < a.size(); i++) {
        sum += a[i] - a[i - k];
        minSum = min(minSum, sum);
    }
    cout << minSum;
}