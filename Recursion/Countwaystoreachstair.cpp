#include <iostream>
using namespace std;

int ways(int n) {
    if (n <= 1) return 1;
    return ways(n - 1) + ways(n - 2);
}

int main() {
    cout << ways(4);
    return 0;
}