#include <iostream>
#include <vector>
using namespace std;

void brutePairs(vector<int>& arr) {
    for (int i = 0; i < arr.size(); i++) {
        for (int j = i + 1; j < arr.size(); j++) {
            cout << "(" << arr[i] << "," << arr[j] << ") ";
        }
    }
    cout << endl;
}
int main() {
    vector<int> arr = {1, 2, 3, 4};
    brutePairs(arr);
    return 0;
}