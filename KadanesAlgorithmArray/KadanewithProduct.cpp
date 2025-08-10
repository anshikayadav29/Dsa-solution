#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2,3,-2,4};
    int maxP = a[0], minP = a[0], res = a[0];
    for(int i = 1; i < a.size(); i++){
        if(a[i] < 0) swap(maxP, minP);
        maxP = max(a[i], maxP * a[i]);
        minP = min(a[i], minP * a[i]);
        res = max(res, maxP);
    }
    cout << res;
}