#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2,2,1,0,0,1};
    int zero=0, one=0, two=0;
    for(int x : a){
        if(x==0) zero++;
        else if(x==1) one++;
        else two++;
    }
    while(zero--) cout << 0 << " ";
    while(one--) cout << 1 << " ";
    while(two--) cout << 2 << " ";
}