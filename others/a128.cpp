#include<bits/stdc++.h>
using namespace std;

map<int, set<int>> s;

int main(){

    int n, m, mn = 0;
    cin >> n >> m;
    while(m--){
        int a, b;
        cin >> a >> b;
        if(a == b) continue;
        if(s[a].count(a) == 0) s[a].insert(a);
        if(s[b].count(b) == 0) s[b].insert(b);
        if(s[a].size() < s[b].size()) swap(a, b);
        for(auto i : s[b]) s[a].insert(i);
        s[b].erase(b);
        if(s[a].size() > s[mn].size()) mn = a;
    }
    cout << mn << endl;
    for(auto it : s[mn]) cout << it << " ";

    return 0;
    
}