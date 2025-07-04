#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while(l <= r) {
        int mid = (l + r) / 2;
        if(arr[mid] == x) return mid;
        else if(arr[mid] < x) l = mid + 1;
        else r = mid - 1;
    }
    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9};
    int x = 7;
    int index = binarySearch(arr, x);
    if(index != -1) cout << "Found at index: " << index;
    else cout << "Not found";
}