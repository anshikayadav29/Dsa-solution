#include <bits/stdc++.h>
using namespace std;
using ll = long long;

struct Node {
    int left, right;
    int cnt;
    Node(): left(0), right(0), cnt(0) {}
};
vector<Node> seg;
int new_node() { seg.emplace_back(); return (int)seg.size()-1; }

int build(int l, int r) {
    int id = new_node();
    if (l==r) return id;
    int m=(l+r)/2;
    seg[id].left = build(l,m);
    seg[id].right = build(m+1,r);
    return id;
}
int update(int prev, int l, int r, int pos) {
    int id = new_node();
    seg[id] = seg[prev];
    seg[id].cnt = seg[prev].cnt + 1;
    if (l==r) return id;
    int m=(l+r)/2;
    if (pos<=m) seg[id].left = update(seg[prev].left, l, m, pos);
    else seg[id].right = update(seg[prev].right, m+1, r, pos);
    return id;
}
int queryKth(int leftRoot, int rightRoot, int l, int r, int k) {
    if (l==r) return l;
    int cntLeft = seg[ seg[rightRoot].left ].cnt - seg[ seg[leftRoot].left ].cnt;
    int m=(l+r)/2;
    if (k <= cntLeft) return queryKth(seg[leftRoot].left, seg[rightRoot].left, l, m, k);
    else return queryKth(seg[leftRoot].right, seg[rightRoot].right, m+1, r, k - cntLeft);
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    int N,Q; 
    if(!(cin>>N>>Q)) return 0;
    vector<int> A(N);
    for(int i=0;i<N;i++) cin>>A[i];
    vector<int> vals = A;
    sort(vals.begin(), vals.end());
    vals.erase(unique(vals.begin(), vals.end()), vals.end());
    int M = vals.size();
    // prepare segtree
    seg.reserve((N+5) * 20);
    new_node(); // index 0 dummy not used
    int root0 = build(0, M-1);
    vector<int> roots(N+1);
    roots[0] = root0;
    for(int i=1;i<=N;i++){
        int pos = lower_bound(vals.begin(), vals.end(), A[i-1]) - vals.begin();
        roots[i] = update(roots[i-1], 0, M-1, pos);
    }
    while(Q--){
        int l,r,k; cin>>l>>r>>k;
        int idx = queryKth(roots[l-1], roots[r], 0, M-1, k);
        cout << vals[idx] << "\n";
    }
    return 0;
}
