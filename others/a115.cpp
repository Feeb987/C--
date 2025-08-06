#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main(){

    set<int> r[5], c[5], diag[2];
    map<int, pair<int, int>> nti;
    int in;
    for(int i = 0;i < 5;i++){
        for(int l = 0;l < 5;l++){
            cin >> in;
            r[i].insert(in);
            c[l].insert(in);
            nti[in] = {i, l};
            if(i == l) diag[0].insert(in);
            if(i + l == 4) diag[1].insert(in);
        }
    }
    while(cin >> in && in != -1){
        auto [i, l] = nti[in];
        r[i].erase(in);
        c[l].erase(in);
        diag[0].erase(in);
        diag[1].erase(in);
    }
    map<int, int> count;
    for(int i = 0;i < 5;i++){
        if(r[i].size() == 1) count[*r[i].begin()]++;
        if(c[i].size() == 1) count[*c[i].begin()]++;
    }
    for(int i = 0;i < 2;i++) if(diag[i].size() == 1) count[*diag[i].begin()]++;

    int ans = 26, maxCount = 0;
    for (auto &[num, c] : count) {
        if (c > maxCount || (c == maxCount && num < ans)) {
            maxCount = c;
            ans = num;
        }
    }
    cout << ans;

    return 0;

}