#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> k(n);
    for(int i = 0; i < n; i++){
        cin >> k[i];
    }

    unordered_map<int,int> last;
    last.reserve(n);
   
    int l = 0, ans = 0;

    for(int r = 0; r < n; r++){
        if(last.count(k[r])){
            l = max(l, last[k[r]] + 1);
        }
        last[k[r]] = r;
        ans = max(ans, r - l + 1);
    }

    cout << ans;
    return 0;
}