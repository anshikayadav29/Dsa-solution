#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3}, p(a.size());
    p[0] = a[0];
    for (int i = 1; i < a.size(); i++)
        p[i] = p[i - 1] + a[i];
    for (int x : p) cout << x << " ";
}