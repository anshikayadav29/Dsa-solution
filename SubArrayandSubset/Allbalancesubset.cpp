#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3, 4};
    int n = a.size(), count = 0;
    for(int i = 1; i < (1 << n); i++) {
        int even = 0, odd = 0;
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) (a[j] % 2 == 0 ? even++ : odd++);
        if(even == odd) count++;
    }
    cout << count;
}