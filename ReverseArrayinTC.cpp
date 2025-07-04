#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void reverseArray(vector<int>& arr) {
    reverse(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {1, 2, 3, 4};
    reverseArray(arr);
    cout << "Reversed: ";
    for(int x : arr) cout << x << " ";
}