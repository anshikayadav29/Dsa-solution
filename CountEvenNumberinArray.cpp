#include <bits/stdc++.h>
using namespace std;
int countEven(int arr[], int n, int i){
    if(i==n) return 0;
    return ((arr[i]%2==0) ? 1 : 0) + countEven(arr, n, i+1);
}
int main(){
    int n; cout<<"Enter size: "; cin>>n;
    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Even Count = "<<countEven(arr, n, 0);
}
