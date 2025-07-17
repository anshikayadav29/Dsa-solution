#include<bits/stdc++.h>
using namespace std;
int main() {
    int n, k; cin >> n >> k;
    deque<int> dq(n);
    for(int i = 0; i < n; i++) cin >> dq[i];
    k = k % n;
    while(k--) {
        dq.push_back(dq.front());
        dq.pop_front();
    }
    for(int x : dq) cout << x << " ";
}