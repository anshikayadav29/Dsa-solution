#include<bits/stdc++.h>
using namespace std;
int sumDigits(int n) {
    int sum = 0;
    while (n) {
        sum += n % 10;
        n /= 10;
    }
    return sum;
}
int main() {
    cout << sumDigits(1234);
}