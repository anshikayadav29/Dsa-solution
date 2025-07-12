#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> &a) {
    int sum = 0, maxi = INT_MIN;
    for(int x : a){
        sum += x;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    return maxi;
}
int main() {
    vector<int> a = {8, -1, 3, 4};
    int normal = kadane(a);
    int total = accumulate(a.begin(), a.end(), 0);
    for(int &x : a) x *= -1;
    int maxWrap = total + kadane(a);
    cout << max(normal, maxWrap);
}