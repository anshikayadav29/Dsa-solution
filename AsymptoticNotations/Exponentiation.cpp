#include <iostream>
using namespace std;
int power(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res *= a;
        a *= a;
        b /= 2;
    }
    return res;
}
int main() {
    cout << power(2, 10);
}