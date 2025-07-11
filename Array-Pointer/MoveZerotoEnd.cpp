#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {0, 1, 0, 3, 12};
    int i = 0;
    for(int j = 0; j < a.size(); j++)
        if(a[j] != 0) swap(a[i++], a[j]);
    for(int x : a) cout << x << " ";
}