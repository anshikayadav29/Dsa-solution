#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int n = a.size();
    for(int i = 0; i < n; i++) {
        int x = 0;
        for(int j = i; j < n; j++) {
            x ^= a[j];
            cout << x << " ";
        }
    }
}
