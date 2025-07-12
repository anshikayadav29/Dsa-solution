#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {5, 2, 6, 1, 7, 3};
    vector<int> diff;
    for(int i = 0; i < a.size(); i += 2)
        diff.push_back(a[i] - a[i+1]);
    int sum = 0, maxi = INT_MIN;
    for(int x : diff){
        sum += x;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}