#include <iostream>
using namespace std;

void reverseStr(string s, int i) {
    if (i < 0) return;
    cout << s[i];
    reverseStr(s, i - 1);
}

int main() {
    string s = "anshika";
    reverseStr(s, s.length() - 1);
    return 0;
}