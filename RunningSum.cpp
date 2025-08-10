#include <iostream>
#include <vector>
using namespace std;

void runningSum(vector<int>& arr) {
    for(int i = 1; i < arr.size(); i++)
        arr[i] += arr[i-1];
}

int main() {
    vector<int> arr = {1, 2, 3};
    runningSum(arr);
    cout << "Running Sum: ";
    for(int x : arr) cout << x << " ";
}