#include <iostream>
#include <vector>
using namespace std;

int sum(vector<int>& a) {
    int s = 0;
    for (int x : a) s += x;
    return s;
}

int main() {
    vector<int> a = {1, 2, 3};
    cout << sum(a);
}