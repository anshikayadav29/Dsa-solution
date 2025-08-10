#include <iostream>
#include <vector>
using namespace std;

int countEven(vector<int>& arr) {
    int count = 0;
    for (int x : arr) {
        if (x % 2 == 0) count++;
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6};
    cout << "Even Count: " << countEven(arr) << endl;
}