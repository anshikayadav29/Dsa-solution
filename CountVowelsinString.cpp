#include <iostream>
#include <string>
using namespace std;

int countVowels(const string& s) {
    int count = 0;
    for (char c : s) {
        c = tolower(c);  
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
            count++;
    }
    return count;
}

int main() {
    string str = "Anshika Yadav";
    cout << "Vowels: " << countVowels(str) << endl;
}