#include<bits/stdc++.h>
#define int long long
using namespace std;
int cnt = 0, l, k;
set<string> s;

void dfs(vector<char> v, string str){
    if(str.size() == l){
        if(s.count(str) == 0){
            s.insert(str);
            ++cnt;
        }
        if(cnt == k) {
            cout << str;
            exit(0);
        }
        return;
    }
    for(int i = 0;i < v.size();i++){
        vector<char> ve(v.begin(), v.end());
        string str2 = str+v[i];
        ve.erase(ve.begin()+i, ve.begin()+i+1);
        dfs(ve, str2);
        if(cnt == k) return;
    }
}

signed main(){
    
    string str;
    cin >> l >> k >> str;
    vector<char> v;
    for(auto c:str) v.push_back(c);
    sort(v.begin(), v.end());
    dfs(v, "");
    int c = 0;

    return 0;
    
}