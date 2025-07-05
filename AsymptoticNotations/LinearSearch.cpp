#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {4, 2, 1, 6};
    sort(a.begin(), a.end());
    for (int x : a) cout << x << " ";
}