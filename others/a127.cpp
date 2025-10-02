#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i, m, mn, mx;
    cin >> n;
    mn = 1000, mx = 0;
    for(i = 0;i < n;i++){
        cin >> m;
        mn = min(m, mn);
        mx = max(m, mx);
    }
    cout << mn << " " << mx << " " << (mx - mn < n ? "yes\n" : "no\n");

    return 0;
    
}