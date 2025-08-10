#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 1, 3, 4, 2, 3};
    int k = 4;
    for(int i = 0; i <= a.size() - k; i++) {
        set<int> s;
        for(int j = i; j < i + k; j++) s.insert(a[j]);
        cout << s.size() << " ";
    }
}