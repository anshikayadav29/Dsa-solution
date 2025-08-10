#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}