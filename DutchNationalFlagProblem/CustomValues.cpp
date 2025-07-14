#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {7,5,9,5,7,9,5};
    int l = 0, m = 0, h = a.size()-1;
    while(m <= h){
        if(a[m] == 5) swap(a[l++], a[m++]);
        else if(a[m] == 7) m++;
        else swap(a[m], a[h--]);
    }
    for(int x : a) cout << x << " ";
}