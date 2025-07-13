#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1,0,2,1,0,2};
    int i = 0, j = 0, k = a.size() - 1;
    while(j <= k){
        if(a[j]==0) swap(a[i++], a[j++]);
        else if(a[j]==1) j++;
        else swap(a[j], a[k--]);
    }
    for(int x : a) cout << x << " ";
}