#include <iostream>
using namespace std;

void hanoi(int n, char src, char aux, char dest) {
    if (n == 0) return;
    hanoi(n - 1, src, dest, aux);
    cout << src << " -> " << dest << endl;
    hanoi(n - 1, aux, src, dest);
}

int main() {
    hanoi(3, 'A', 'B', 'C');
    return 0;
}