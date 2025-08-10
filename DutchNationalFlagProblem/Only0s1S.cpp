#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1,1,0,0,1};
    int c0 = count(a.begin(), a.end(), 0);
    for(int i = 0; i < a.size(); i++)
        a[i] = i < c0 ? 0 : 1;
    for(int x : a) cout << x << " ";
}