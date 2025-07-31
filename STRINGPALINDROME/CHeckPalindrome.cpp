#include <iostream>
#include <cctype>
using namespace std;

bool isCleanPalindrome(string s) {
    string cleaned;
    for (char c : s) if (isalnum(c)) cleaned += tolower(c);
    int i = 0, j = cleaned.size() - 1;
    while (i < j) if (cleaned[i++] != cleaned[j--]) return false;
    return true;
}

int main() {
    string s = "A man, a plan, a canal: Panama";
    cout << (isCleanPalindrome(s) ? "Yes" : "No");
}