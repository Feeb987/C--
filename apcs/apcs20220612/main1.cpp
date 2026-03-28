#include<bits/stdc++.h>
using namespace std;

int main(){

    map<int, int> m;
    set<int> s;
    int mx = 0;
    for(int i = 0;i < 3;i++){
        int in;
        cin >> in;
        m[in]++;
        mx = max(mx, m[in]);
        s.insert(in);
    }
    cout << mx << " ";
    for(auto it = s.rbegin();it != s.rend();it++) cout << *it << " ";

    return 0;

}