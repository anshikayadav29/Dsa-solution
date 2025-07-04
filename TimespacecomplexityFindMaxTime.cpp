#include <iostream>
#include <vector>
using namespace std;

int findMax(vector<int>& arr) {
    int maxVal = arr[0];
    for (int i = 1; i < arr.size(); i++) {
        if (arr[i] > maxVal) maxVal = arr[i];
    }
    return maxVal;
}
int main() {
    vector<int> arr = {1, 5, 3, 9, 2};
    cout << "Max Element: " << findMax(arr) << endl;
}