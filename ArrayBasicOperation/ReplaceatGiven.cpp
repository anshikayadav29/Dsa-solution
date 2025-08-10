#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    v[2] = 99;
    for(int x : v) cout << x << " ";
}