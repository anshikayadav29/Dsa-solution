#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2, 4, 5};
    int res = 0;
    for(int i = 0; i < (1 << a.size()); i++) {
        int x = 0;
        for(int j = 0; j < a.size(); j++)
            if(i & (1 << j)) x ^= a[j];
        res = max(res, x);
    }
    cout << res;
}