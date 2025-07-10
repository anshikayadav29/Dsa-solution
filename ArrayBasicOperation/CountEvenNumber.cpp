#include<bits/stdc++.h>
using  namespace std;
int main(){
    vector<int> v ={1,2,3,4,6};
    int c=count_if(v.begin(),v.end(),[](int x){return x % 2==0; });
    cout<< c;
}