#include<bits/stdc++.h>
using namespace std;
int kadane(vector<int> &a){
    int sum = 0, maxi = INT_MIN;
    for(int i : a){
        sum += i;
        maxi = max(maxi, sum);
        if(sum < 0) sum = 0;
    }
    return maxi;
}
int main() {
    vector<vector<int>> mat = {{1, -2}, {3, 4}};
    int rows = mat.size(), cols = mat[0].size(), ans = INT_MIN;
    for(int l = 0; l < cols; l++){
        vector<int> temp(rows, 0);
        for(int r = l; r < cols; r++){
            for(int i = 0; i < rows; i++)
                temp[i] += mat[i][r];
            ans = max(ans, kadane(temp));
        }
    }
    cout << ans;
}