#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> &a){
    int sum = 0, maxx = INT_MIN;
    for(int x : a){
        sum += x;
        maxx = max(maxx, sum);
        if(sum < 0) sum = 0;
    }
    return maxx;
}
int main() {
    vector<vector<int>> m = {{1,2,3}, {4,5,6}, {7,8,9}};
    vector<int> diagonal;
    for(int i = 0; i < m.size(); i++)
        diagonal.push_back(m[i][i]);
    cout << kadane(diagonal);
}