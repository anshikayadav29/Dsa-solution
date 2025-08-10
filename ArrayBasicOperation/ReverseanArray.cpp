#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    reverse(v.begin(), v.end());
    for(int x : v) cout << x << " ";
}