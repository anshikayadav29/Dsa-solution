#include<bits\stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3};
    v.erase(v.begin());
    for(int x: v)cout << x <<" ";
}