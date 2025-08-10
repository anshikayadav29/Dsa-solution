#include<bits/stdc++.h>
using namespace std;

void primeFactors(int n) {
    for (int i = 2; i * i <= n; i++)
        while (n % i == 0) {
            cout << i << " ";
            n /= i;
        }
    if (n > 1) cout << n;
}

int main() {
    primeFactors(60);
}