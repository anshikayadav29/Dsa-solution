#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int low = 0, high = n - 1;
    while(low < high) {
        int mid = (low + high) / 2;
        if(a[mid] > a[high]) low = mid + 1;
        else high = mid;
    }
    cout << "Index: " << low << ", Value: " << a[low];
}