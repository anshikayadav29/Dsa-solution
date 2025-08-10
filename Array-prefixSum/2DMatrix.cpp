#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<vector<int>> mat = {{1, 2}, {3, 4}};
    for(int i = 0; i < 2; i++)
        for(int j = 1; j < 2; j++)
            mat[i][j] += mat[i][j-1];
    for(auto row : mat) {
        for(int x : row) cout << x << " ";
    }
}