#include <iostream>
#include <vector>
using namespace std;

int search(vector<int>& a, int x) {
    for (int i = 0; i < a.size(); i++)
        if (a[i] == x) return i;
    return -1;
}

int main() {
    vector<int> a = {2, 4, 6, 8};
    cout << search(a, 2);
}