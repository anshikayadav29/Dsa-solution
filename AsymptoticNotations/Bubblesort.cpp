#include<bits/stdc++.h>
#include<vector>
using namespace std;
void bubbleSort(vector<int>& a){
    for( int i=0;i< a.size();i++)
    for(int j=0;j< a.size()-i-1;j++)
    if(a[j]>a[j+1])swap(a[j],a[j+1]);
    }
int main(){
    vector<int>a ={3,2,1};
    bubbleSort(a);
    for(int x:a)cout<<x<<" ";
}