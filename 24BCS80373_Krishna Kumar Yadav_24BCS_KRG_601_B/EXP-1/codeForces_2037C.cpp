#include <bits/stdc++.h>
using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        int n;
        cin >> n;

        if (n <= 4) {
            cout << -1 << '\n';
            continue;
        }

        cout << "1 3 ";
        for (int i = 7; i <= n; i += 2) {
            cout << i << " ";
        }

        cout << "5 4 2 ";

        for (int i = 6; i <= n; i += 2) {
            cout << i << " ";
        }

        cout << '\n';
    }

    return 0;
}
