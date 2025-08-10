#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int main() {
    priority_queue<int> pq;
    pq.push(4); pq.push(1); pq.push(7);
    while (!pq.empty()) {
        cout << pq.top() << " ";
        pq.pop();
    }
}