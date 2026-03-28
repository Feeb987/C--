#include<bits/stdc++.h>
using namespace std;

struct A{
    int id, t, nt;
    A(int i, int l) : id(i), t(l), nt(l){}
};


int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    string st,c;
    vector<A> v;
    while (getline(cin, st) && st != "#"){
        istringstream iss(st);
        int q, k;
        while (iss >> c >> q >> k) v.push_back(A(q, k));
    }
    sort(v.begin(), v.end(), [](A a, A b){
        if(a.nt != b.nt) return a.nt < b.nt;
        return a.id < b.id;
    });
    int r;
    cin >> r;
    while(r--){
        cout << v[0].id << "\n";
        v[0].nt += v[0].t;
        sort(v.begin(), v.end(), [](A a, A b){
            if(a.nt != b.nt) return a.nt < b.nt;
            return a.id < b.id;
        });
    }

    return 0;
    
}