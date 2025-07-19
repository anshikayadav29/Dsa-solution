#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 4, 20, 3, 10, 5};
    int s = 33, i = 0, j = 0, sum = 0;
    while(j < a.size()) {
        sum += a[j++];
        while(sum > s) sum -= a[i++];
        if(sum == s) cout << i << " " << j-1 << endl;
    }
}