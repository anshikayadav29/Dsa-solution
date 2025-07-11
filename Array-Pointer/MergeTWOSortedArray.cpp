#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 7};
    vector<int> b = {2, 4, 6, 8};
    int i = 0, j = 0;
    vector<int> res;
    while(i < a.size() && j < b.size()) {
        if(a[i] < b[j]) res.push_back(a[i++]);
        else res.push_back(b[j++]);
    }
    while(i < a.size()) res.push_back(a[i++]);
    while(j < b.size()) res.push_back(b[j++]);
    for(int x : res) cout << x << " ";
}