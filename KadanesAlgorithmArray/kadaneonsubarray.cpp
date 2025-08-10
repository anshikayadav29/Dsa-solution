#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {1, 2, 3, 4, 5};
    int k = 9, sum = 0, start = 0;
    for(int end = 0; end < a.size(); end++){
        sum += a[end];
        while(sum > k) sum -= a[start++];
        if(sum == k) cout << "Found from " << start << " to " << end << "\n";
    }
}