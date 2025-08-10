#include <iostream>
using namespace std;

int countFactors(int n) {
    int c = 0;
    for (int i = 1; i * i <= n; i++) {
        if (n % i == 0) c += (i * i == n) ? 1 : 2;
    }
    return c;
}

int main() {
    cout << countFactors(36);
}