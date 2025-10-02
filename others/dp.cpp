#include<bits/stdc++.h>
using namespace std;

struct dp{
    unsigned long int w, p;
};

int main(){

    unsigned long int n, m;
    cin >> n >> m;
    m = 1 << m;
    vector<vector<unsigned long int>> DP(n+1, vector<unsigned long int>(m+1, 0));
    vector<dp> list(n);
    for(unsigned long int i = 0;i < n;i++) {
        unsigned long int w, p;
        cin >> w >> p;
        list[i] = {1 << w, p};
    }
    for(unsigned long int i = 1;i <= n;i++){
        for(unsigned long int l = 1;l <= m;l++){
            if(list[i-1].w > l) DP[i][l] = DP[i-1][l];
            else DP[i][l] = max(DP[i-1][l], DP[i-1][l - list[i-1].w] + list[i-1].p);
        }
    }
    cout << DP[n][m];

    return 0;
    
}