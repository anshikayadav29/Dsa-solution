#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {4,-1,2,1,-5,4};
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum = max(i, sum + i);
        maxi = max(maxi, sum);
    }
    cout << maxi;
}