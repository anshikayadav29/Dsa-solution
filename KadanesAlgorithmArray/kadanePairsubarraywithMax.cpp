#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
    int sum = 0, maxi = INT_MIN, start = 0, s = 0, end = 0;
    for(int i = 0; i < a.size(); i++){
        sum += a[i];
        if(sum > maxi){ maxi = sum; start = s; end = i; }
        if(sum < 0){ sum = 0; s = i + 1; }
    }
    cout << "Max sum: " << maxi << "\nSubarray: ";
    for(int i = start; i <= end; i++) cout << a[i] << " ";
}