#include<bits/stdc++.h>
using namespace std;
int main() {
    int n = 1e5;
    vector<int> a(n, -1);
    a[n/2] = 100000;
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}