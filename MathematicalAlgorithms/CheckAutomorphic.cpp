#include<bits/stdc++.h>
using namespace std;

bool isAutomorphic(int n) {
    int sq = n * n;
    while (n) {
        if (n % 10 != sq % 10) return false;
        n /= 10;
        sq /= 10;
    }
    return true;
}

int main() {
    cout << isAutomorphic(76);
}