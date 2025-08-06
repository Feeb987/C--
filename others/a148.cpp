#include<bits/stdc++.h>
using namespace std;

int main(){

    int i, t = 0;
    string s;
    while(getline(cin, s)){
        vector<int> f[128];
        for(i = 0;i < 128;i++) f[i] = vector<int>{0, -i};
        for(auto c : s) f[c][0]++;
        sort(f, f+128);
        if(t++) cout << endl;
        for(auto p : f) if(p[0]) cout << -p[1] << " " << p[0] << endl;
    }

    return 0;
    
}