#include<bits/stdc++.h>
using namespace std;
void countProd(vector<int>& a, int i, int prod, int k, int& count) {
    if(i == a.size()) {
        if(prod == k) count++;
        return;
    }
    countProd(a, i + 1, prod * a[i], k, count);
    countProd(a, i + 1, prod, k, count);
}
int main() {
    vector<int> a = {2, 3, 4};
    int k = 6, count = 0;
    countProd(a, 0, 1, k, count);
    cout << count;
}