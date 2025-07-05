#include <iostream>
#include <vector>
using namespace std;

void printAllPairs(vector<int>& arr) {
    for(int i = 0; i < arr.size(); i++) {
        for(int j = i + 1; j < arr.size(); j++) {
            cout << "(" << arr[i] << ", " << arr[j] << ") ";
        }
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    cout << "All Pairs: ";
    printAllPairs(arr);
}