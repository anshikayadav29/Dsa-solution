
#include<bits/stdc++.h>
using namespace std;

int countPrimes(int n) {
    vector<bool> p(n+1, true);
    p[0] = p[1] = false;
    for (int i = 2; i * i <= n; i++)
        if (p[i])
            for (int j = i*i; j <= n; j += i)
                p[j] = false;
    return count(p.begin(), p.end(), true);
}

int main() {
    cout << countPrimes(30);
}