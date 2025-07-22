#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3, 4, 6};
    int maxLen = 0;
    for(int i = 0; i < a.size(); i++) {
        int sum = 0;
        for(int j = i; j < a.size(); j++) {
            sum += a[j];
            if(sum % 2 == 0) maxLen = max(maxLen, j - i + 1);
        }
    }
    cout << maxLen;
}