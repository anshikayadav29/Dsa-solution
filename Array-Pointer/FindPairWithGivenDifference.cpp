#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 8, 30, 40, 100};
    int diff = 60, i = 0, j = 1;
    while(j < a.size()) {
        if(i != j && a[j] - a[i] == diff) {
            cout << "Yes";
            return 0;
        }
        else if(a[j] - a[i] < diff) j++;
        else i++;
    }
    cout << "No";
}