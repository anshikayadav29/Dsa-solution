#include <iostream>
using namespace std;

int main() {
    int arr[] = {0, 1, 0, 3, 12};
    int n = sizeof(arr)/sizeof(arr[0]);
    int index = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) arr[index++] = arr[i];
    }

    while (index < n) arr[index++] = 0;

    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    return 0;
}