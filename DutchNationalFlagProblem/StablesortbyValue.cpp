#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2,0,1,2,0,1};
    stable_sort(a.begin(), a.end());
    for(int x : a) cout << x << " ";
}