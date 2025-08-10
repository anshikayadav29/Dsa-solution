#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 2, 2};
    int c = count(v.begin(), v.end(), 2);
    cout << c;
}