#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int n = a.size();
    for(int i = 0; i < (1 << n); i++) {
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) cout << a[j] << " ";
        cout << endl;
    }
}