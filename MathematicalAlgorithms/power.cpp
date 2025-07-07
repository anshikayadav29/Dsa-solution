#include <iostream>
using namespace std;

int power(int a, int b) {
    int res = 1;
    while (b--) res *= a;
    return res;
}

int main() {
    cout << power(2, 5);
}