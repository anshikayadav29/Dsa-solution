#include<bits/stdc++.h>
using namespace std;

bool isPerfect(int n) {
    int sum = 1;
    for (int i = 2; i <= n / 2; i++)
        if (n % i == 0) sum += i;
    return sum == n;
}

int main() {
    cout << isPerfect(28);
}