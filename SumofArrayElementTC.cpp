#include <iostream>
#include <vector>
using namespace std;

int arraySum(vector<int>& arr) {
    int sum = 0;
    for (int x : arr) {
        sum += x;
    }
    return sum;
}

int main() {
    vector<int> arr = {5, 10, 15};
    cout << "Sum: " << arraySum(arr) << endl;
}