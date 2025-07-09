#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {2, 4, 6, 8};
    double avg = accumulate(v.begin(), v.end(), 0.0) / v.size();
    cout << avg;
}