#include<bits/stdc++.h>
using namespace std;
void solve(vector<int>& a, int i, int sum, int k) {
    if(i == a.size()) {
        if(sum == k) cout << "Yes\n";
        return;
    }
    solve(a, i + 1, sum + a[i], k);
    solve(a, i + 1, sum, k);
}
int main() {
    vector<int> a = {1, 2, 3};
    int k = 5;
    solve(a, 0, 0, k);
}