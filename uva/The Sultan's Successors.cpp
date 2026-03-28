#include<bits/stdc++.h>
#include<cstring>
using namespace std;
vector<vector<int>> v(8, vector<int>(8));
bool c[8], p[15], m[15];
int mx = 0;

void dfs(int q, int num){
    if(q == 8) mx = max(mx, num);
    else {
        for(int i = 0;i < 8;i++){
            if(!c[i] && !p[i+q] && !m[q-i+7]){
                c[i] = p[i+q] = m[q-i+7] = true;
                dfs(q+1, num + v[q][i]);
                c[i] = p[i+q] = m[q-i+7] = false;
            }
        }
    }
}

int main(){
    
    int n;
    cin >> n;
    while(n--){
        memset(c, 0, sizeof(c));
        memset(p, 0, sizeof(p));
        memset(m, 0, sizeof(m));
        mx = 0;
        for(int i = 0;i < 8;i++) for(auto &it:v[i]) cin >> it;
        dfs(0, 0);
        cout << mx << endl;
    }

    return 0;
    
}