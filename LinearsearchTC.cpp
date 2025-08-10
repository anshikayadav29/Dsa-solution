#include <iostream>
#include <vector>
using namespace std;

int linearSearch(vector<int>& arr, int x) {
    for(int i = 0; i < arr.size(); i++)
        if(arr[i] == x)
            return i;
    return -1;
}

int main() {
    vector<int> arr = {10, 20, 30};
    int x = 20;
    int index = linearSearch(arr, x);
    if(index != -1) cout << "Found at index: " << index;
    else cout << "Not found";
}