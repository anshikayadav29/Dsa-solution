#include <iostream>
#include <vector>
using namespace std;

int countSubarraysWithSum(vector<int>& arr, int k) {
    int count = 0;
    for(int i = 0; i < arr.size(); i++) {
        int sum = 0;
        for(int j = i; j < arr.size(); j++) {
            sum += arr[j];
            if(sum == k) count++;
        }
    }
    return count;
}

int main() {
    vector<int> arr = {1, 2, 3};
    int k = 3;
    cout << "Subarrays with sum " << k << ": " << countSubarraysWithSum(arr, k) << endl;
}