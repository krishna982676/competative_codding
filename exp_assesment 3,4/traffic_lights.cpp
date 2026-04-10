#include <bits/stdc++.h>
using namespace std;

int main() {
    int X, N;
    cin >> X >> N;

    vector<int> P(N);
    for(int i = 0; i < N; i++) cin >> P[i];

    set<int> pos;
    multiset<int> lengths;

    pos.insert(0);
    pos.insert(X);
    lengths.insert(X);

    for(int i = 0; i < N; i++) {
        int p = P[i];

        auto it = pos.upper_bound(p);
        int right = *it;
        int left = *(--it);

        lengths.erase(lengths.find(right - left));
        lengths.insert(p - left);
        lengths.insert(right - p);

        pos.insert(p);

        cout << *lengths.rbegin() << " ";
    }

    return 0;
}