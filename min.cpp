#include <bits/stdc++.h>
using namespace std;
int main(){
    int n; cout<<"Enter size: "; cin>>n;
    int arr[n]; for(int i=0;i<n;i++) cin>>arr[i];
    cout<<"Min = "<<*min_element(arr,arr+n)<<"\n";
    cout<<"Max = "<<*max_element(arr,arr+n);
}
