#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1,2,0,2,0,1};
    sort(a.begin(), a.end(), [](int x, int y){ return x < y; });
    for(int x : a) cout << x << " ";
}