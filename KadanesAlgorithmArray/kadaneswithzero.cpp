#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {0, -3, 5, -2, 0, 3};
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}