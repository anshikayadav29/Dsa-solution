#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4};
    swap(v[1], v[3]);
    for(int x : v) cout << x << " ";
}