#include <iostream>
using namespace std;

bool isEven(int n) {
    if (n == 0) return true;
    if (n == 1) return false;
    return isEven(n - 2);
}

int main() {
    cout << isEven(10);
    return 0;
}