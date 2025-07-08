#include<bits/stdc++.h>
using namespace std;

int binToDec(string b) {
    int res = 0;
    for (char c : b)
        res = res * 2 + (c - '0');
    return res;
}

int main() {
    cout << binToDec("1011");
}