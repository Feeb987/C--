#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;
map<int, char> m, n;

pair<int, int> fr(int a){
    if(a == 0) return {1, 0};
    if(a == 1) return {0, -1};
    if(a == 2) return {-1, 0};
    if(a == 3) return {0, 1};
}

int main(){

    int r, c;
    m[0] = 'E'; n['E'] = 0;
    m[1] = 'S'; n['S'] = 1;
    m[2] = 'W'; n['W'] = 2;
    m[3] = 'N'; n['N'] = 3;
    cin >> r >> c;
    int x, y; char ch; string path;
    set<string> lost;
    while(cin >> x >> y >> ch >> path){
        int a = n[ch];
        bool flag = true;
        for(auto it:path){
            if(it == 'F' && !lost.count(m[a]+x+""+y)) {
                auto u = fr(a);
                x += u.f; y += u.s;
            }
            if(it == 'R') a = (a+1)%4;
            if(it == 'L') if(--a < 0) a += 4;
            if(x < 0 || x > r || y < 0 || y > c){
                auto u = fr(a);
                x -= u.f; y -= u.s;
                flag = false;
                cout << x << " " << y << " " << m[a] << " LOST\n";
                if(x == 0 && y == 0){
                    lost.insert(m[1]+x+""+y);
                    lost.insert(m[2]+x+""+y);
                }
                else if(x == 0 && y == c){
                    lost.insert(m[3]+x+""+y);
                    lost.insert(m[2]+x+""+y);
                }
                else if(x == r && y == 0){
                    lost.insert(m[0]+x+""+y);
                    lost.insert(m[1]+x+""+y);
                }
                else if(x == r && y == c){
                    lost.insert(m[0]+x+""+y);
                    lost.insert(m[3]+x+""+y);
                }
                else lost.insert(m[a]+x+""+y);
                break;
            }
        }
        if(flag) cout << x << " " << y << " " << m[a] << "\n";
    }

    return 0;
    
}