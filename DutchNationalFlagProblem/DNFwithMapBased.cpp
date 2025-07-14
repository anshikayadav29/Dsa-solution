#include<bits/stdc++.h>
using namespace std;
int main() {
    map<int,int> mp;
    vector<int> a = {1,0,2,0,1,2};
    for(int x : a) mp[x]++;
    a.clear();
    for(auto [num, count] : mp)
        for(int i = 0; i < count; i++)
            a.push_back(num);
    for(int x : a) cout << x << " ";
}