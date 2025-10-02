#include <bits/stdc++.h>
using namespace std;

int main() {

    int n, x, y, h, i, mxh = 0, mxp = 0;
    static vector<int> t[100000];
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> x >> y >> h;
        t[i].push_back(x*x + y*y);
        t[i].push_back(-h);
    }
    sort(t, t+n);
    for(i = 0;i < n;i++){
        mxh = max(-t[i][1], mxh);
        mxp = max(mxh + t[i][1], mxp);
    }
    cout << mxp;
    
    return 0;
}