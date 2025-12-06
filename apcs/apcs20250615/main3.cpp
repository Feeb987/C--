#include<bits/stdc++.h>
#define int long long
using namespace std;

signed main(){

    ios::sync_with_stdio(0);
    cin.tie(0), cout.tie(0);
    int n, t, ans = 0;
    cin >> n >> t;
    vector<int> sand;
    while(n--){
        int s;
        cin >> s;
        while (!sand.empty() && sand.back() <= s) {
            ans += sand.back();
            s += sand.back();
            sand.pop_back();
        }
        if(s <= t) sand.push_back(s);
    }
    for(auto it : sand) ans += it;
    cout << ans;

    return 0;

}