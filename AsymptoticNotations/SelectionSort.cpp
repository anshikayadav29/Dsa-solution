#include <iostream>
#include <vector>
using namespace std;

void sortIt(vector<int>& a) {
    for (int i = 0; i < a.size(); i++) {
        int m = i;
        for (int j = i + 1; j < a.size(); j++)
            if (a[j] < a[m]) m = j;
        swap(a[i], a[m]);
    }
}

int main() {
    vector<int> a = {3, 1, 4};
    sortIt(a);
    for (int x : a) cout << x << " ";
}