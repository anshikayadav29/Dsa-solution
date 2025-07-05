#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    sort(a.begin(), a.end());
    do {
        for (int x : a) cout << x << " ";
        cout << endl;
    } while (next_permutation(a.begin(), a.end()));
}