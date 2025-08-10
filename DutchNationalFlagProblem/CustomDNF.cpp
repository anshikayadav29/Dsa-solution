#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {3,1,2,3,1,2};
    int pivot = 2;
    int l=0, m=0, h=a.size()-1;
    while(m <= h){
        if(a[m] < pivot) swap(a[l++], a[m++]);
        else if(a[m] == pivot) m++;
        else swap(a[m], a[h--]);
    }
    for(int x : a) cout << x << " ";
}