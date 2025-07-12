#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {5, -3, 1, 2, -1};
    sort(a.begin(), a.end());
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}