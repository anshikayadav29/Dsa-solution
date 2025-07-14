#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1,0,1,0,1,0};
    stable_partition(a.begin(), a.end(), [](int x){ return x == 0; });
    for(int x : a) cout << x << " ";
}