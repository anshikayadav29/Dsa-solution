#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    rotate(v.begin(), v.end() - 1, v.end());
    for(int x : v) cout << x << " ";
}