#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int n = a.size(), count = 0;
    for(int i = 1; i < (1 << n); i++) {
        int sum = 0;
        for(int j = 0; j < n; j++)
            if(i & (1 << j)) sum += a[j];
        if(sum % 2 == 0) count++;
    }
    cout << count;
}