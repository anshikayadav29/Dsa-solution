#include<bits/stdc++.h>
using namespace std;

int productDigits(int n) {
    int p = 1;
    while (n) {
        p *= n % 10;
        n /= 10;
    }
    return p;
}

int main() {
    cout << productDigits(123);
}