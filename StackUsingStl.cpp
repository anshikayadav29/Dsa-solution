#include <bits/stdc++.h>
using namespace std;
int main() {
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    cout << st.top() << "\n"; // 30
    st.pop();
    cout << st.top() << "\n"; // 20
}