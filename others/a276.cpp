#include<bits/stdc++.h>
using namespace std;

int main(){

    string c;
    int i, j, k;
    cin >> c;
    while(c != "#"){
        vector<stack<string>> p(52, stack<string>{});
        for(i = 0;i < 52;i++){
            p[i].push(c);
            cin >> c;
        }
        for(i = 1;i < p.size();i++){
            for(j = i - (i < 3 ? 1 : 3);j < i;j += 2){
                if(p[i].top()[0] == p[j].top()[0] || p[i].top()[1] == p[j].top()[1]){
                    p[j].push(p[i].top());
                    p[i].pop();
                    if(p[i].size() == 0) p.erase(p.begin()+i);
                    i = max(0, j - 1);
                    break;
                }
            }
        }
        cout << p.size() << " pile" << (p.size() > 1 ? "s" : "") << " remaining:";
        for(auto pi : p) cout << " " << pi.size();
        cout << endl;
    }

    return 0;

}