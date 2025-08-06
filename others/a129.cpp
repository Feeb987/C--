#include<bits/stdc++.h>
#define ll long long
using namespace std;

struct Tree{
    ll x, y, h;
};

bool f(Tree a, Tree b){
    return a.x + a.y < b.x + b.y;
}

int main(){
    
    ll t, mh = 0, nm = 0;
    cin >> t;
    vector<Tree> tree(t);
    for(ll i = 0;i < t;i++) cin >> tree[i].x >> tree[i].y >> tree[i].h;
    sort(tree.begin(), tree.end(), f);
    for(ll i = t-1;i >= 0;i--){
        if(nm != 0) mh = max(mh, tree[i].h - nm);
        nm = max(nm, tree[i].h);
    }
    cout << mh;

    return 0;
    
}