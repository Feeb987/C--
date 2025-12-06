#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

    int n;
    cin >> n;
    vector<int> dp(n+1, 0);
    dp[1] = 1;
    dp[2] = 2;
    dp[3] = 4;
    for(int i = 4;i <= n;i++) dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
    cout << dp[n];

    return 0;
    
}