#include <bits/stdc++.h>
using namespace std;

/*
 Suffix Automaton implementation (lowercase English letters).
 Finds substring maximizing (length * occurrences).
*/

struct State {
    int link;                       // suffix link
    int len;                        // max length of substring in this state
    array<int,26> next;             // transitions for 'a'..'z'
    long long occ;                  // number of endpos (occurrences)
    int first_pos;                  // one position where this state's substring ends
    State() {
        link = -1; len = 0; occ = 0; first_pos = -1;
        next.fill(-1);
    }
};

struct SuffixAutomaton {
    vector<State> st;
    int last;

    SuffixAutomaton(int maxlen = 0) {
        st.reserve(2 * maxlen + 5);
        st.push_back(State());
        st[0].link = -1;
        last = 0;
    }

    void extend(char ch, int pos) {
        int c = ch - 'a';
        int cur = (int)st.size();
        st.push_back(State());
        st[cur].len = st[last].len + 1;
        st[cur].occ = 1;               // each new end corresponds to one occurrence initially
        st[cur].first_pos = pos;

        int p = last;
        while (p != -1 && st[p].next[c] == -1) {
            st[p].next[c] = cur;
            p = st[p].link;
        }
        if (p == -1) {
            st[cur].link = 0;
        } else {
            int q = st[p].next[c];
            if (st[p].len + 1 == st[q].len) {
                st[cur].link = q;
            } else {
                // clone q
                int clone = (int)st.size();
                st.push_back(st[q]);  // copy
                st[clone].len = st[p].len + 1;
                // cloned state's occurrences should start at 0 (we only propagate real ends later)
                st[clone].occ = 0;
                // first_pos of clone remains same as q
                while (p != -1 && st[p].next[c] == q) {
                    st[p].next[c] = clone;
                    p = st[p].link;
                }
                st[q].link = st[cur].link = clone;
            }
        }
        last = cur;
    }

    // After building, propagate occ counts from longer states to shorter via counting sort by len
    void compute_occurrences() {
        int sz = st.size();
        int maxlen = 0;
        for (int i = 0; i < sz; ++i) maxlen = max(maxlen, st[i].len);
        vector<int> cnt(maxlen + 1);
        for (int i = 0; i <= maxlen; ++i) cnt[i] = 0;
        for (int i = 0; i < sz; ++i) cnt[st[i].len]++;
        for (int i = 1; i <= maxlen; ++i) cnt[i] += cnt[i-1];
        vector<int> order(sz);
        for (int i = sz - 1; i >= 0; --i) order[--cnt[st[i].len]] = i;
        // process states in descending len: add occ to link
        for (int i = sz - 1; i > 0; --i) {
            int v = order[i];
            int p = st[v].link;
            if (p != -1) st[p].occ += st[v].occ;
        }
    }

    // reclaim one substring that gives best (len * occ)
    pair<long long, string> bestSubstring(const string &s) {
        compute_occurrences();
        long long bestVal = 0;
        int bestState = 0;
        int bestLen = 0;
        for (int i = 1; i < (int)st.size(); ++i) {
            long long val = 1LL * st[i].len * st[i].occ;
            if (val > bestVal) {
                bestVal = val;
                bestState = i;
                bestLen = st[i].len;
            }
        }
        if (bestVal == 0) return {0, ""};
        // reconstruct substring: we know first_pos (position where some substring of maxlen ends)
        int endpos = st[bestState].first_pos;
        string res = s.substr(endpos - bestLen + 1, bestLen);
        return {bestVal, res};
    }
};

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    string s;
    if (!(cin >> s)) return 0;
    // ensure lowercase letters; if not, you'd need to adapt alphabet
    SuffixAutomaton sam((int)s.size());
    for (int i
