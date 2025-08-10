#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3};
    int n = a.size();
    for(int i = 0; i < n; i++) {
        int sum = 0;
        for(int j = i; j < n; j++) {
            sum += a[j];
            cout << "Sum from " << i << " to " << j << " = " << sum << endl;
        }
    }
}