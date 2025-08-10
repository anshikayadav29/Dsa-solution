#include <iostream>
#include <string>
using namespace std;

int main() {
    string str;
    cout << "Enter a string: ";
    getline(cin, str); // input with spaces

    int vowels = 0;

    for (char ch : str) {
        ch = tolower(ch); // make case insensitive
        if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
            vowels++;
        }
    }

    cout << "Total vowels in the string: " << vowels << endl;

    return 0;
}