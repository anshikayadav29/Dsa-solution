#include<bits/stdc++.h>
using namespace std;

string toOctal(int n) {
    string r;
    while (n) {
        r += to_string(n % 8);
        n /= 8;
    }
    reverse(r.begin(), r.end());
    return r;
}

int main() {
    cout << toOctal(65);
}