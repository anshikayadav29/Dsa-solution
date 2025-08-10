#include <iostream>
#include <vector>
using namespace std;

bool hasPairWithSum(vector<int>& arr, int x) {
    int l = 0, r = arr.size() - 1;
    while(l < r) {
        int sum = arr[l] + arr[r];
        if(sum == x) return true;
        else if(sum < x) l++;
        else r--;
    }
    return false;
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5};
    int target = 9;
    cout << (hasPairWithSum(arr, target) ? "Yes" : "No");
}