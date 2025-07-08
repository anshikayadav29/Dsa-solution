#include <iostream>
using namespace std;

int countZero(int n) {
    if (n == 0) return 0;
    return (n % 10 == 0) + countZero(n / 10);
}

int main() {
    cout << countZero(102030);
    return 0;
}