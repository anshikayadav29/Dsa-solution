#include <iostream>
#include <vector>
using namespace std;

int getFirstElement(vector<int>& arr) {
    return arr[0];
}

int main() {
    vector<int> arr = {4, 2, 7, 1};
    cout << "First Element: " << getFirstElement(arr) << endl;
    return 0;
}