#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {0,1,2,1,2,0,1};
    int c0 = 0, c1 = 0, c2 = 0;
    for(int x : a){
        if(x==0) c0++;
        else if(x==1) c1++;
        else c2++;
    }
    for(int i = 0; i < c0; i++) cout << 0 << " ";
    for(int i = 0; i < c1; i++) cout << 1 << " ";
    for(int i = 0; i < c2; i++) cout << 2 << " ";
}