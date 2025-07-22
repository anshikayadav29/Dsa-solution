#include<bits/stdc++.h>
using namespace std;
int main() {
    vector<int> a = {5, 4, 3, 2, 1, 6};
    for(int i = 0; i < a.size(); i++) {
        int j = i;
        while(j < a.size() - 1 && a[j] > a[j+1]) j++;
        for(int k = i; k <= j; k++) cout << a[k] << " ";
        if(j > i) cout << endl;
        i = j;
    }
}