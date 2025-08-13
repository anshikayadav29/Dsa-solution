#include <bits/stdc++.h>
using namespace std;
int prodDigits(int n){ return (n==0)?1:(n%10)*prodDigits(n/10); }
int main(){
    int n; cout<<"Enter number: "; cin>>n;
    cout<<"Product of digits = "<<prodDigits(n);
}
