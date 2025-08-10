#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {-1, -2, -3, 4, 5};
    int sum = 0;
    for(int x : a) if(x > 0) sum += x;
    cout << (sum == 0 ? *max_element(a.begin(), a.end()) : sum);
}