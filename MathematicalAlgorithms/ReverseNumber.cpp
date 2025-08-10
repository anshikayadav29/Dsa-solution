#include<bits/stdc++.h>
using namespace std;

int reverseNum(int n) {
    int r = 0;
    while (n) {
        r = r * 10 + n % 10;
        n /= 10;
    }
    return r;
}

int main() {
    cout << reverseNum(1234);
}