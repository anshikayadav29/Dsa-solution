#include<bits\stdc++.h>
using namespace std;
int main(){
    int arr[] ={4,7,2,9};
    int x =7,idx =-1;
    for(int i=0; i<4; i++)
        if(arr[i] == x)idx =i;
        cout<<idx;
}