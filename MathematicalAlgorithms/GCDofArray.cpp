#include<bits/stdc++.h>
using namespace std;

int gcd(int a, int b) {
    return b ? gcd(b, a % b) : a;
}

int gcdArray(vector<int> a) {
    int res = a[0];
    for (int i = 1; i < a.size(); i++)
        res = gcd(res, a[i]);
    return res;
}

int main() {
    cout << gcdArray({12, 18, 24});
}