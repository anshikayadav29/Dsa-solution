#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {-2, -3, 4, -1, -2, 1, 5, -3};
    int sum = 0, maxSum = INT_MIN, start = 0, end = 0, temp = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
        if (sum > maxSum) {
            maxSum = sum;
            start = temp;
            end = i;
        }
        if (sum < 0) {
            sum = 0;
            temp = i + 1;
        }
    }
    cout << maxSum << " " << start << " " << end;
}