#include <bits/stdc++.h>
using namespace std;

int main() {

    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        string s;
        cin >> s;

        vector<int> cnt(26, 0);
        for (char c : s) cnt[c - 'a']++;

        int mx = 0;
        char mxChar = s[0];
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > mx) {
                mx = cnt[i];
                mxChar = char('a' + i);
            }
        }

        int mn = INT_MAX;
        char mnChar = mxChar;
        for (int i = 0; i < 26; i++) {
            if (cnt[i] > 0 && cnt[i] < mn && char('a' + i) != mxChar) {
                mn = cnt[i];
                mnChar = char('a' + i);
            }
        }

        for (char &c : s) {
            if (c == mnChar) {
                c = mxChar;
                break;
            }
        }

        cout << s << '\n';
    }
    return 0;
}
