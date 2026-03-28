#include<bits/stdc++.h>
#define int long long
#define x first
#define y second
using namespace std;

signed main(){

    int n;
    cin >> n;
    vector<pair<int, int>> m;
    while (n--){
        int a, b;
        cin >> a >> b;
        m.push_back({a, b});
    }
    sort(m.begin(), m.end());
    vector<int> lis;
    for(auto it:m){
        if(lis.empty() || it.y >= lis.back()) lis.push_back(it.y);
        else *upper_bound(lis.begin(), lis.end(), it.y) = it.y;
    }
    cout << lis.size();

    return 0;
    
}