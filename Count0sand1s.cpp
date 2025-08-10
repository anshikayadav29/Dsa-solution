#include <iostream>
#include <vector>
using namespace std;

void countZeroOne(const vector<int>& arr, int &zeroCount, int &oneCount) {
    zeroCount = 0;
    oneCount = 0;
    for(int x : arr) {
        if(x == 0) zeroCount++;
        else if(x == 1) oneCount++;
    }
}

int main() {
    vector<int> arr = {0, 1, 0, 1, 1};
    int zeroCount, oneCount;
    countZeroOne(arr, zeroCount, oneCount);
    cout << "0s: " << zeroCount << ", 1s: " << oneCount << endl;
}