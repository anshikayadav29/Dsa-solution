#include<bits/stdc++.h>
using namespace std;

int countBits(int n) {
    int c = 0;
    while (n) {
        c += n & 1;
        n >>= 1;
    }
    return c;
}

int main() {
    cout << countBits(13);
}