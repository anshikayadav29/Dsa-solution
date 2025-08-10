#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 3, 1, 2, 0, 5};
    int k = 3;
    for(int i = 0; i <= a.size() - k; i++) {
        int m = a[i];
        for(int j = 1; j < k; j++) m = max(m, a[i + j]);
        cout << m << " ";
    }
}