#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2,1,0,2,0,1};
    int c0 = 0, c1 = 0, c2 = 0;
    for(int x : a) {
        if(x==0) c0++;
        else if(x==1) c1++;
        else c2++;
    }
    int i = 0;
    while(c0--) a[i++] = 0;
    while(c1--) a[i++] = 1;
    while(c2--) a[i++] = 2;
    for(int x : a) cout << x << " ";
}