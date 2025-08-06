#include<bits/stdc++.h>
using namespace std;

vector<int> g[100001];
int c[100001], kk[2];

void traverse(int v){
    kk[c[v]]++;
    for(int u : g[v])
        if(c[u == -1])
            c[u] = 1 - c[v], traverse(u);
        else if(c[u] == c[v]) throw 0;
    }
}

int main(){

    int n, m, i, j, k = 0;
    cin >> n >> m;
    fill(c, c+n+1, -1);
    while(m--){
        cin >> i >> j;
        g[i].push_back(j);
        g[i].push_back(i);
    }
    try{
        for(i = 1;i <= n;i++){
            if(c[i] == -1){
                kk[0] = kk[1] = 0;
                c[i] = 1, traverse(i);
                k += min(kk[0], kk[1]);
            }
        }
        cout << k << endl;
    }
    catch(int e){
        cout << e << endl;
    }

    return 0;
    
}