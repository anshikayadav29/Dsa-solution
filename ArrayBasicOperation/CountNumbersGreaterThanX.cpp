#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v = {5, 10, 15, 20};
    int c = count_if(v.begin(), v.end(), [](int x){ return x > 10; });
    cout << c;
}