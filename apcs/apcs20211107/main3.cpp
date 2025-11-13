#include<bits/stdc++.h>
#define ll long long
using namespace std;

bool cmp(ll a, ll b){
    return a > b;
}

int main(){

    ll n, m, ans = 0;
    cin >> n >> m;
    vector<int> p(n, 0);
    vector<int> mac(n);
    for(int i = 0;i < m;i++){
        int sta, end, wei;
        cin >> sta >> end >> wei;
        p[sta] += wei;
        p[end+1] -= wei;
    }
    for(int i = 0;i < n;i++) cin >> mac[i];
    sort(mac.begin(), mac.end());
    for(int i = 1;i < n;i++) p[i] += p[i-1];
    sort(p.begin(), p.end(), cmp);
    for(int i = 0;i < n;i++){
        if(!p[i]) break; 
        ans += (mac[i] * p[i]);
    }
    cout << ans;

    return 0;
    
}