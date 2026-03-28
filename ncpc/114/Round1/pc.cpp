#include<bits/stdc++.h>
#include<fstream>
#define f first
#define s second
#define ll long long
using namespace std;

int main(){

    ifstream in("pc.in");
    int n;
    while(in >> n, n){
        vector<pair<int, int>> t(n), u;
        for(auto &it:t) in >> it.f >> it.s;
        sort(t.begin(), t.end(), [](pair<int, int> a, pair<int, int> b){
            return a.f < b.f;
        });
        for(auto &it:t) {
            if(u.size() == 0){
                u.push_back(it);
                continue;
            }
            bool flag = false;
            for(int i = 0;i < u.size();i++){
                if(u[i].s <= it.f){
                    flag = true;
                    u[i] = it;
                    break;
                }
            }
            if(!flag) u.push_back(it);
        }
        cout << u.size() << endl;
    }

    return 0;
    
}