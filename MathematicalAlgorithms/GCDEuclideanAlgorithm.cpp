#include<bits\stdc++.h>
using namespace std;
int gcd(int a,int b){
    return b==0 ? :gcd(b, a%b);
}
int main (){
    cout<<gcd(24,36);

}