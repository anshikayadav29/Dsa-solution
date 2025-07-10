#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 3, 5, 2, 2};
    int total = accumulate(a.begin(), a.end(), 0), left = 0;
    for(int i = 0; i < a.size(); i++) {
        if(left == total - left - a[i]) cout << i;
        left += a[i];
    }
}