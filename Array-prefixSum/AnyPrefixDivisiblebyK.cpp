#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {5, 10, 15};
    int k = 5, sum = 0, found = 0;
    for(int i = 0; i < a.size(); i++) {
        sum += a[i];
        if(sum % k == 0) found = 1;
    }
    cout << found;
}