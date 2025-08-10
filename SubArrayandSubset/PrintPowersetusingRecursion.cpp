#include<bits/stdc++.h>
using namespace std;
void powerset(vector<int>& a, int i, vector<int> temp) {
    if(i == a.size()) {
        for(int x : temp) cout << x << " ";
        cout << endl;
        return;
    }
    powerset(a, i + 1, temp);
    temp.push_back(a[i]);
    powerset(a, i + 1, temp);
}
int main() {
    vector<int> a = {1, 2, 3};
    powerset(a, 0, {});
}