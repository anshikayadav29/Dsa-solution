#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {0,2,1,1,0,2};
    vector<int> b;
    b.insert(b.end(), count(a.begin(), a.end(), 0), 0);
    b.insert(b.end(), count(a.begin(), a.end(), 1), 1);
    b.insert(b.end(), count(a.begin(), a.end(), 2), 2);
    for(int x : b) cout << x << " ";
}