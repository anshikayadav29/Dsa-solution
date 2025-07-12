#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, -1, 2, -3, 2, -5};
    int sum = 0, maxi = INT_MIN, len = 0, temp = 0;
    for(int x : a){
        sum += x; temp++;
        if(sum > maxi){ maxi = sum; len = temp; }
        if(sum < 0){ sum = 0; temp = 0; }
    }
    cout << "Max Sum: " << maxi << ", Length: " << len;
}