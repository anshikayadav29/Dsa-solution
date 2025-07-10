#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {10, 20, 30, 40};
    auto it = find(v.begin(), v.end(), 30);
    cout << distance(v.begin(), it);
}