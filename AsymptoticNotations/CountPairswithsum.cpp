#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> a = {1, 5, 7};
    int k = 6, c = 0;
    
    for (int i = 0; i < a.size(); i++) {
        for (int j = i + 1; j < a.size(); j++) {
            if (a[i] + a[j] == k) {
                c++;
            }
        }
    }
    
    cout << c;
    return 0;
}