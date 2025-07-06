#include <iostream>
#include <map>
#include <vector>
using namespace std;
int main() {
    vector<int> a = {1, 2, 2, 3};
    map<int, int> f;
    for (int x : a) f[x]++;
    for (auto p : f) cout << p.first << ":" << p.second << " ";
}