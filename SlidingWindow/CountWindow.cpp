#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {2, 4, 6, 3};
    int k = 2, count = 0, sum = 0;
    for(int i = 0; i < k; i++) sum += a[i];
    if(sum % 2 == 0) count++;
    for(int i = k; i < a.size(); i++) {
        sum += a[i] - a[i - k];
        if(sum % 2 == 0) count++;
    }
    cout << count;
}