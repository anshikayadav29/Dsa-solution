#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& a, int x) {
    int l = 0, r = a.size() - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == x) return m;
        (a[m] < x) ? l = m + 1 : r = m - 1;
    }
    return -1;
}

int main() {
    vector<int> a = {1, 3, 5, 7, 9};
    int i = binarySearch(a, 7);
    cout << (i != -1 ? "Found at index: " + to_string(i) : "Not found") << endl;
}