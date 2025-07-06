#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
    vector<string> s = {"banana", "apple", "car"};
    sort(s.begin(), s.end());
    for (auto x : s) cout << x << " ";
}