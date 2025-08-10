#include <iostream>
#include <vector>
using namespace std;

int findMin(vector<int>& arr) {
    int minVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] < minVal) minVal = arr[i];
    }
    return minVal;
}

int main() {
    vector<int> arr = {4, 2, 9, 1, 5};
    cout << "Min Element: " << findMin(arr) << endl;
}