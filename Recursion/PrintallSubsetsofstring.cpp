#include <iostream>
using namespace std;

void subset(string s, string curr, int i) {
    if (i == s.length()) {
        cout << curr << endl;
        return;
    }
    subset(s, curr, i + 1);
    subset(s, curr + s[i], i + 1);
}

int main() {
    subset("ab", "", 0);
    return 0;
}