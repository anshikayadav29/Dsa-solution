#include<bits/stdc++.h>
using namespace std;
int main() {
    int n; cin >> n;
    vector<int> a(n);
    for(int &x : a) cin >> x;

    sort(a.begin(), a.end());
    int max_idx = n - 1, min_idx = 0;
    int max_elem = a[n - 1] + 1;

    for(int i = 0; i < n; i++) {
        if(i % 2 == 0)
            a[i] += (a[max_idx--] % max_elem) * max_elem;
        else
            a[i] += (a[min_idx++] % max_elem) * max_elem;
    }

    for(int i = 0; i < n; i++)
        cout << a[i] / max_elem << " ";
}