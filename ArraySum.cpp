#include <bits/stdc++.h>
using namespace std;

int sumArr(int arr[], int n, int i) {
    if(i == n) return 0;
    return arr[i] + sumArr(arr, n, i+1);
}

int main() {
    int n;
    cout << "Enter size: ";
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++) cin >> arr[i];
    cout << "Sum = " << sumArr(arr, n, 0);
}
