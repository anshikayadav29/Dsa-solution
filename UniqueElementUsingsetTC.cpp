#include <iostream>
#include <vector>
#include <set>
using namespace std;

set<int> uniqueElements(vector<int>& arr) {
    return set<int>(arr.begin(), arr.end());
}

int main() {
    vector<int> arr = {1, 2, 2, 3};
    set<int> uniq = uniqueElements(arr);
    cout << "Unique Elements: ";
    for(int x : uniq) cout << x << " ";
}