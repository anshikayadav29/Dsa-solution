#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3, 7, 5};
    int k = 12, i = 0, sum = 0;
    for(int j = 0; j < a.size(); j++) {
        sum += a[j];
        while(sum > k) sum -= a[i++];
        if(sum == k) {
            cout << i << " to " << j;
            break;
        }
    }
}