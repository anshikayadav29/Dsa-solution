#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3};
    for (int i : a)
        for (int j : a)
            cout << i << "," << j << endl;
}