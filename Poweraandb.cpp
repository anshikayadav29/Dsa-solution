#include <bits/stdc++.h>
using namespace std;
int power(int a,int b){ return (b==0) ? 1 : a*power(a,b-1); }
int main(){
    int a,b; cout<<"Enter base and exponent: "; cin>>a>>b;
    cout<<"Result = "<<power(a,b);
}
