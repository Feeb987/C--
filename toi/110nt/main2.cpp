#include<bits/stdc++.h>
using namespace std;

int main(){

    int r, c;
    string str, n;
    cin >> r >> c >> str;
    vector<string> m(r);
    queue<pair<int, int>> xy;
    for(int i = 0;i < r;i++) n += '#';
    for(int i = 0;i < r;i++) {
        cin >> m[i];
        if(m[i] != n) for(int l = 0;l < c;l++) if(m[i][l] == '.') xy.push({i, l});
    }
    int ign = (xy.size() - str.size()) / 2, cnt = 0;
    while(ign--) xy.pop();
    pair<int, int> p = xy.front();xy.pop();
    for(int i = 0;i < r;i++){
        if(i != p.first) {
            cout << m[i] << endl;
            continue;
        }
        for(int l = 0;l < c;l++){
            if(l == p.second) {
                cout << str[cnt++];
                if(xy.size()) {
                    p = xy.front();
                    xy.pop();
                }
            }
            else cout << m[i][l];
        }
        cout << endl;
    }
    

    return 0;
    
}