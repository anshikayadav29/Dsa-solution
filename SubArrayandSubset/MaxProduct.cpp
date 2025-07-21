#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {2, 3, -2, 4};
    int prod = 1, maxProd = INT_MIN, minProd = 1;
    for(int x : a) {
        if(x < 0) swap(prod, minProd);
        prod = max(x, prod * x);
        minProd = min(x, minProd * x);
        maxProd = max(maxProd, prod);
    }
    cout << maxProd;
}