#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 3, 4, 6};
    int target = 7, i = 0, j = a.size() - 1;
    while(i < j) {
        int sum = a[i] + a[j];
        if(sum == target) {
            cout << "Yes";
            return 0;
        }
        if(sum < target) i++;
        else j--;
    }
    cout << "No";
}