#include <bits/stdc++.h>
using namespace std;

int maxArr(int arr[], int n, int i) {
    if(i == n-1) return arr[i];
    return max(arr[i], maxArr(arr, n, i+1));
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Max = " << maxArr(arr, n, 0);
}
