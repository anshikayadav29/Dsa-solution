#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, -3, 4, 5, -1, 6};
    int sum = 0, maxSum = 0;
    for(int x : a) {
        if (x >= 0) sum += x;
        else sum = 0;
        maxSum = max(maxSum, sum);
    }
    cout << maxSum;
}