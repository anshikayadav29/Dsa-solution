#include <iostream>
#include <vector>
using namespace std;

vector<int> prefixSum(vector<int>& arr) {
    vector<int> pre(arr.size());
    pre[0] = arr[0];
    for(int i=1; i<arr.size(); i++)
        pre[i] = pre[i-1] + arr[i];
    return pre;
}

int main() {
    vector<int> arr = {1, 2, 3};
    vector<int> pre = prefixSum(arr);
    cout << "Prefix Sum: ";
    for(int x : pre) cout << x << " ";
}