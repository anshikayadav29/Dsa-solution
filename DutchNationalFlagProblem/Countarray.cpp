#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2,1,0,2,0,1,1};
    vector<int> count(3,0);
    for(int x : a) count[x]++;
    vector<int> ans;
    for(int i = 0; i < 3; i++)
        for(int j = 0; j < count[i]; j++)
            ans.push_back(i);
    for(int x : ans) cout << x << " ";
}