#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {2, 4, 1};
    int m = a[0];
    for (int x : a) if (x > m) m = x;
    cout << m;
}