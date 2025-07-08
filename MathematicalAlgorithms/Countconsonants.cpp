#include <iostream>
using namespace std;

bool isVowel(char c) {
    return string("aeiouAEIOU").find(c) != string::npos;
}

int countConsonants(string s, int i) {
    if (i == s.length()) return 0;
    return (!isVowel(s[i]) && isalpha(s[i])) + countConsonants(s, i + 1);
}

int main() {
    cout << countConsonants("Anshika", 0);
    return 0;
}