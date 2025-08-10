#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {2, 4, 6, 1, 8, 10};
    int k = 3;
    for(int i = 0; i <= a.size() - k; i++) {
        bool ok = 1;
        for(int j = i; j < i + k; j++) if(a[j] % 2 != 0) ok = 0;
        if(ok) cout << i << " ";
    }
}