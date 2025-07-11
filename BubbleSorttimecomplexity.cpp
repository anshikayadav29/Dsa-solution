#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int>& arr) {
    int n = arr.size();
    for(int i=0; i<n; i++)
        for(int j=0; j<n-1; j++)
            if(arr[j] > arr[j+1])
                swap(arr[j], arr[j+1]);
}

int main() {
    vector<int> arr = {5, 1, 4, 2};
    bubbleSort(arr);
    cout << "Sorted: ";
    for(int x : arr) cout << x << " ";
}