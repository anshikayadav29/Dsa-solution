#include<iostream>
using namespace std;

void printName(int i, int n) {
    if(i > n) return;
    cout << "Anshika" << endl;
    printName(i+1, n);  
}

int main() {
    int n;
    cin >> n;
    printName(1, n);
    return 0;
}