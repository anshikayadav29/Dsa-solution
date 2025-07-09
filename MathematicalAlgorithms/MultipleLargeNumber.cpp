#include<bits/stdc++.h>
using namespace std;

string multiply(string a, string b) {
    if (a == "0" || b == "0") return "0";
    vector<int> res(a.size() + b.size(), 0);
    for (int i = a.size() - 1; i >= 0; i--)
        for (int j = b.size() - 1; j >= 0; j--)
            res[i + j + 1] += (a[i] - '0') * (b[j] - '0');

    for (int i = res.size() - 1; i > 0; i--) {
        res[i - 1] += res[i] / 10;
        res[i] %= 10;
    }

    string ans;
    int i = res[0] == 0;
    while (i < res.size()) ans += res[i++] + '0';
    return ans;
}

int main() {
    cout << multiply("123", "45");
}