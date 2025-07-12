#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 0, 0, 1, 0};
    for(auto &x : a) x = (x == 0) ? 1 : -1;
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}