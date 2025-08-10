#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1,0,2,1,0,2};
    vector<int> result;
    for(int x : {0,1,2})
        for(int i = 0; i < a.size(); i++)
            if(a[i]==x) result.push_back(x);
    for(int x : result) cout << x << " ";
}