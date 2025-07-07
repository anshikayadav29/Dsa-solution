#include <iostream>
using namespace std;

int countUpper(string s, int i) {
    if (i == s.length()) return 0;
    return (isupper(s[i]) ? 1 : 0) + countUpper(s, i + 1);
}

int main() {
    cout << countUpper("AnshiKa");
    return 0;
}