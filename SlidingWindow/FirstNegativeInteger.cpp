#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> a = {12, -1, -7, 8, -15, 30, 16, 28};
    int k = 3;
    deque<int> dq;
    for(int i = 0; i < k; i++) if(a[i] < 0) dq.push_back(i);
    cout << (dq.empty() ? 0 : a[dq.front()]) << " ";
    for(int i = k; i < a.size(); i++) {
        while(!dq.empty() && dq.front() <= i - k) dq.pop_front();
        if(a[i] < 0) dq.push_back(i);
        cout << (dq.empty() ? 0 : a[dq.front()]) << " ";
    }
}