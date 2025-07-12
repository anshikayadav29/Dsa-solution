#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {10, 12, 14, 11, 10};
    vector<int> diff;
    for(int i = 1; i < a.size(); i++)
        diff.push_back(a[i] - a[i - 1]);
    int sum = 0, maxi = INT_MIN;
    for(int i : diff){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}