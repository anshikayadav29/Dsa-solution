#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, -2, 1, 1, -2, 1};
    int sum = 0, maxi = INT_MIN, count = 0;
    for(int i : a){
        sum += i;
        if(sum > maxi){
            maxi = sum;
            count = 1;
        } else if(sum == maxi) count++;
        if(sum < 0) sum = 0;
    }
    cout << "Max sum: " << maxi << ", Count: " << count;
}