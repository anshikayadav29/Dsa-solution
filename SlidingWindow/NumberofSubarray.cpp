#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {1, 2, 1, 3, 4};
    int k = 3, count = 0;
    for(int i = 0; i < a.size(); i++) {
        int sum = 0;
        for(int j = i; j < a.size(); j++) {
            sum += a[j];
            if(sum == k) count++;
        }
    }
    cout << count;
}