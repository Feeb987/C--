#include<bits/stdc++.h>
#define int long long
#define f first
#define s second
using namespace std;

signed main(){

    int n;
    cin >> n;
    int l = 0, r = n - 1;
    vector<int> a(n), dp(n+1, 0);
    map<int, int> idx;
    for(int i = 0;i < n;i++){
        cin >> a[i];
        if(i > 0) dp[i] = dp[i-1] + a[i-1];
        idx[a[i]] = i;
    }
    dp[n] = dp[r] + a[r];
    for(auto p:idx){
        if(p.s > r || p.s < l) continue;
        int mni = p.s;
        int rr = dp[r+1] - dp[mni+1], ll = dp[mni] - dp[l];
        if(rr > ll) l = mni + 1;
        else r = mni - 1;
    }
    cout << a[l];

    return 0;
    
}