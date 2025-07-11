#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, 6, 7, 4, 8};
    int k = 3, x = 5, count = 0;
    for(int i = 0; i <= a.size() - k; i++) {
        bool ok = 1;
        for(int j = i; j < i + k; j++) if(a[j] < x) ok = 0;
        if(ok) count++;
    }
    cout << count;
}