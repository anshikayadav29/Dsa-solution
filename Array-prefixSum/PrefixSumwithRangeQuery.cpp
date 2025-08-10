#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, 3, 7, 2, 6};
    vector<int> p(a.size());
    p[0] = a[0];
    for(int i = 1; i < a.size(); i++) p[i] = p[i-1] + a[i];
    int l = 1, r = 3;
    cout << p[r] - (l > 0 ? p[l-1] : 0);
}