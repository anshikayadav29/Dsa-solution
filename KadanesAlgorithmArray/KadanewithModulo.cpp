#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {3, -2, 5, -1};
    int k = 7;
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum % k);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}