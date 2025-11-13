#include<bits/stdc++.h>
using namespace std;

struct P{
    int a, s, d = 0;
};

int main(){

    int n, m;
    cin >> n >> m;
    vector<P> player(n);
    vector<int> f;
    for(int i = 0;i < 3;i++){
        for(int l = 0;l < n;l++){
            switch (i) {
            case 0:
                cin >> player[l].a;
                break;
            case 1:
                cin >> player[l].s;
                break;
            case 2:
                int i;
                cin >> i;
                f.push_back(i);
                break;
            
            default:
                break;
            }
        }
    }
    while (f.size() > 1) {
        vector<int> next_win, next_lose;
        for (size_t i = 0; i + 1 < f.size(); i += 2) {
            int x = f[i], y = f[i+1];
            P &p1 = player[x-1];
            P &p2 = player[y-1];
            if (p1.a * p1.s >= p2.a * p2.s) {
                p1.a += p2.a * p2.s / (2 * p1.s);
                p1.s += p2.a * p2.s / (2 * p1.a);
                p2.a += p2.a / 2;
                p2.s += p2.s / 2;
                p2.d++;
                next_win.push_back(x);
                if (p2.d < m) next_lose.push_back(y);
            } else {
                p2.a += p1.a * p1.s / (2 * p2.s);
                p2.s += p1.a * p1.s / (2 * p2.a);
                p1.a += p1.a / 2;
                p1.s += p1.s / 2;
                p1.d++;
                next_win.push_back(y);
                if (p1.d < m) next_lose.push_back(x);
            }
        }
        if (f.size() % 2 == 1) {
            next_win.push_back(f.back());
        }
        f.clear();
        for (auto &w : next_win) f.push_back(w);
        for (auto &l : next_lose) f.push_back(l);
    }
    cout << f.front();

    return 0;
    
}