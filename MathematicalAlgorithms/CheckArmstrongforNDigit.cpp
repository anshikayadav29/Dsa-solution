#include<bits/stdc++.h>
using namespace std;

bool isArmstrong(int n) {
    int t = n, d = to_string(n).length(), s = 0;
    while (t) {
        s += pow(t % 10, d);
        t /= 10;
    }
    return s == n;
}

int main() {
    cout << isArmstrong(9474);
}