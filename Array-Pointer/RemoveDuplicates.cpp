#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 1, 2, 2, 3};
    int i = 0;
    for(int j = 1; j < a.size(); j++) {
        if(a[j] != a[i]) a[++i] = a[j];
    }
    for(int k = 0; k <= i; k++) cout << a[k] << " ";
}