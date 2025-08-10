#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {-2, 3, -1, 2, -4, 2};
    int sum = 0, prefixMax = INT_MIN;
    for(int i : a){
        sum += i;
        prefixMax = max(prefixMax, sum);
    }
    reverse(a.begin(), a.end());
    sum = 0;
    int suffixMax = INT_MIN;
    for(int i : a){
        sum += i;
        suffixMax = max(suffixMax, sum);
    }
    cout << max(prefixMax, suffixMax);
}