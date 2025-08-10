#include <iostream>
#include <map>
using namespace std;

int main() {
    map<string, int> m;
    m["a"] = 1;
    m["b"] = 2;
    for (auto x : m) cout << x.first << ":" << x.second << " ";
}