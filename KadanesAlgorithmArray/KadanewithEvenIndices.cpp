#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, -2, 3, -4, 5};
    int sum = 0, maxi = INT_MIN;
    for(int i = 0; i < a.size(); i += 2){
        sum += a[i];
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    cout << maxi;
}