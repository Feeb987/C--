#include<bits/stdc++.h>
#define de  first
#define dii  second
using namespace std;

int main(){

    int r, c, d, di, ro;
    cin >> r >> c >> d;
    int mnd = d, mxd = 0;
    pair<int, int> m[r][c];
    for(int i = 0;i < r;i++) for(int l = 0;l < c;l++) m[i][l].de = d;
    cin >> di;
    for(int i = 0;i < di;i++) {
        int x, y;
        cin >> y >> x;
        m[y][x].dii++;
    }

    cin >> ro;
    while (ro--) {
        int x, y, s;
        bool hd = false;
        cin >> y >> x >> s >> d;
        s /= 2;
        for(int i = y-s;i <= y+s;i++){
            for(int l = x-s;l <= x+s;l++){
                if(i < 0 || l < 0 || i >= r || l >= c) continue;
                if(m[i][l].dii > 0) di -= m[i][l].dii, m[i][l].dii = 0, hd = true;
            }
        }
        if(!hd){
            for(int i = y-s;i <= y+s;i++){
                for(int l = x-s;l <= x+s;l++){
                    if(i < 0 || l < 0 || i >= r || l >= c) continue;
                    m[i][l].de -= d;
                    mnd = min(mnd, m[i][l].de);
                }
            }
        }
    }
    for(int i = 0;i < r;i++) for(int l = 0;l < c;l++) mxd = max(mxd, m[i][l].de);
    
    cout << mxd << " " << mnd << " " << di;

    return 0;
    
} 