//code
#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> h = {1, 8, 6, 2, 5, 4, 8, 3, 7};
    int i = 0, j = h.size() - 1, area = 0;
    while(i < j) {
        area = max(area, min(h[i], h[j]) * (j - i));
        if(h[i] < h[j]) i++;
        else j--;
    }
    cout << area;
}
