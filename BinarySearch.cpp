#include <bits/stdc++.h>
using namespace std;
int main(){
    int n,x; cout<<"Enter size: "; cin>>n;
    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Enter element to find: "; cin>>x;
    sort(arr,arr+n);
    int l=0,r=n-1;
    while(l<=r){
        int m=(l+r)/2;
        if(arr[m]==x){ cout<<"Found"; return 0; }
        else if(arr[m]<x) l=m+1;
        else r=m-1;
    }
    cout<<"Not Found";
}
