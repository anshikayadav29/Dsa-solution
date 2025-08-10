#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 3, 4, 5, 6};
    int sum = 0;
    for(int i = 0; i < v.size(); i += 2) sum += v[i];
    cout << sum;
}