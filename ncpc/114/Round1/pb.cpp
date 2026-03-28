#include<bits/stdc++.h>
#define f first
#define s second
#define ll long long
#include<fstream>
using namespace std;

int main(){

    ifstream in("output/pb.in");
    int a, b;
    while(in >> a >> b && a > 0 && b > 0){
        vector<vector<ll>> h(a, vector<ll>(b)), d(a, vector<ll>(b));
        for(int i = 0;i < a;i++) for(auto &it:h[i]) in >> it;
        for(int i = 0;i < a;i++) for(auto &it:d[i]) in >> it;
        vector<vector<vector<ll>>> dp(a, vector<vector<ll>>(b, vector<ll>(2, -1e15)));
        if(d[0][0] == 3) dp[0][0][0] = h[0][0];
        else dp[0][0][1] = h[0][0];

        for(int i = 0;i < a;i++){
            for(int l = 0;l < b;l++){
                if(dp[i][l][0] == -1e15 && dp[i][l][1] == -1e15) continue;
                if(i + 1 < a){
                    if(d[i+1][l] == 3) dp[i+1][l][0] = max(dp[i+1][l][0], h[i+1][l] + dp[i][l][1]);
                    else dp[i+1][l][1] = max(dp[i+1][l][1], max(dp[i][l][1], dp[i][l][0]) + h[i+1][l]);
                }
                if(l + 1 < b){
                    if(d[i][l+1] == 3) dp[i][l+1][0] = max(dp[i][l+1][0], h[i][l+1] + dp[i][l][1]);
                    else dp[i][l+1][1] = max(dp[i][l+1][1], max(dp[i][l][1], dp[i][l][0]) + h[i][l+1]);
                }
            }
        }
        ll ans = max(dp[a-1][b-1][0], dp[a-1][b-1][1]);
        if(ans != -1e15) cout << ans << endl;
        else cout << "IMPOSSIBLE";
    }

    return 0;
    
}
/*
3 4
1 3 2 5
2 -1 4 1
3 2 2 3
1 3 2 3
2 1 3 1
3 2 1 2
16
*/