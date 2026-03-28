#include<bits/stdc++.h>
#include<fstream>
#define int long long
using namespace std;
int n, m;

bool g(int l, vector<int> v){
    int c = 1, p = 0;
    for(int i = 0;i < n;i++){
        if(2*(v[i] - v[p]) > l){
            c++;
            p = i;
        }
    }
    return p <= m;
}

signed main(){

    //ifstream in("")
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;
    cin >> m;
    int l = v[0], r = 2*(v[v.size()-1] - v[0]), ans = r;
    while(l <= r){
        int mid = (l+r)/2;
        if(g(mid, v)){
            ans = mid;
            r = mid-1;
        }
        else l = mid+1;
    }
    cout << ans;
    

    return 0;
    
}