#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 2, 9, 1};
    sort(v.rbegin(), v.rend());
    for(int x : v) cout << x << " ";
}