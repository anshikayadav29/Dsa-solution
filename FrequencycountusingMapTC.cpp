#include <iostream>
#include <vector>
#include <map>
using namespace std;

map<int, int> getFrequency(vector<int>& arr) {
    map<int, int> freq;
    for(int x : arr) freq[x]++;
    return freq;
}

int main() {
    vector<int> arr = {1, 2, 2, 3};
    map<int, int> freq = getFrequency(arr);
    for(auto& p : freq)
        cout << p.first << ": " << p.second << " ";
}