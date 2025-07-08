#include<bits/stdc++.h>
using namespace std;

string decToBin(int n) {
    string res;
    while (n) {
        res += (n % 2) + '0';
        n /= 2;
    }
    reverse(res.begin(), res.end());
    return res;
}

int main() {
    cout << decToBin(11);
}