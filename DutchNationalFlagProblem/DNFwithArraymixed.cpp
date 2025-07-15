// Sort array with 0s, 1s, and 2s using Dutch National Flag Algorithm

#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1,1,2,0,2,0};
    int l=0, m=0, h=a.size()-1;
    while(m<=h){
        if(a[m]==0) swap(a[l++], a[m++]);
        else if(a[m]==1) m++;
        else swap(a[m], a[h--]);
    }
    for(int x : a) cout << x << " ";
}