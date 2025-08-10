#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 2};
    for (int i : a)
        for (int j : a)
            for (int k : a)
                cout << i << j << k << endl;
}