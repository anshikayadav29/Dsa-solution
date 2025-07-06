#include<bits/stdc++.h>
#include<vector>
using namespace std;
int main(){
    vector<int> a ={1,2,3};
    reverse(a.begin(),a.end());
    for(int x:a) cout<<x<<" ";
}