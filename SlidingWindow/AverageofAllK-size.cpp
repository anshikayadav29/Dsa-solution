#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 3, 2, 6, -1};
    int k = 3, sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    cout << sum / (double)k << " ";
    for(int i = k; i < a.size(); i++) {
        sum += a[i] - a[i - k];
        cout << sum / (double)k << " ";
    }
}