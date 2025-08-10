#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {-2, 0, 1, 3};
    int target = 2, count = 0;
    sort(a.begin(), a.end());
    for(int i = 0; i < a.size(); i++) {
        int l = i + 1, r = a.size() - 1;
        while(l < r) {
            if(a[i] + a[l] + a[r] < target) {
                count += r - l;
                l++;
            } else r--;
        }
    }
    cout << count;
}