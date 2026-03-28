#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){

    string s1, s2;
    while(cin >> s1 >> s2){
        vector<vector<ll>> dp(s1.size()+1, vector<ll>(s2.size()+1));
        for(ll i = 1;i <= s1.size();i++){
            for(ll l = 1;l <= s2.size();l++){
                if(s1[i-1]==s2[l-1]) dp[i][l] = dp[i-1][l-1] + 1;
                else dp[i][l] = max(dp[i-1][l], dp[i][l-1]);
            }
        }
        cout << dp[s1.size()][s2.size()] << endl;
    }

    return 0;
    
}