#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<pair<int, int>> a = {{1,2}, {-3,1}, {4,3}};
    vector<int> weighted;
    for(auto [x, w] : a)
        weighted.push_back(x * w);
    int sum = 0, maxi = INT_MIN;
    for(int i : weighted){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}