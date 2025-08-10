#include <iostream>
#include <cmath>
using namespace std;

bool isArmstrong(int n) {
    int sum = 0, temp = n, digits = 0;
    while (temp) { digits++; temp /= 10; }
    temp = n;
    while (temp) {
        sum += pow(temp % 10, digits);
        temp /= 10;
    }
    return sum == n;
}

int main() {
    int num = 153;
    cout << (isArmstrong(num) ? "Yes" : "No") << endl;
}