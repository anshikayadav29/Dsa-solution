#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {20, 10, 15, 5, 7};

    vector<int>::iterator it = v.begin();
    it++;
    cout << *(it) << " ";

    it = it + 2;
    cout << *(it) << " ";

    vector<int>::iterator it1 = v.end();
    vector<int>::iterator it3 = v.begin();

    cout << v[0] << " " << v.at(0) << " ";
    cout << v.back() << " ";

    for (vector<int>::iterator it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    for (auto it = v.begin(); it != v.end(); it++) {
        cout << *(it) << " ";
    }

    return 0;
}