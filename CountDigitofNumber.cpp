#include <iostream>
using namespace std;

int countDigits(int n) {
    int count = 0;
    while (n != 0) {
        n /= 10;
        count++;
    }
    return count;
}

int main() {
    int num = 12345;
    cout << "Digits: " << countDigits(num) << endl;
}