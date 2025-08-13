#include <bits/stdc++.h>
using namespace std;
int firstIndex(int arr[], int n, int i, int x){
    if(i==n) return -1;
    return (arr[i]==x) ? i : firstIndex(arr, n, i+1, x);
}
int main(){
    int n,x; cout<<"Enter size: "; cin>>n;
    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter element to find: "; cin>>x;
    cout<<"First Index = "<<firstIndex(arr, n, 0, x);
}
