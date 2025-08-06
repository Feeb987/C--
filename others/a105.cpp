#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, y, r, tree = 0;
    cin >> x >> y >> r;
    vector<vector<int>> m(y, vector<int>(x, 0));
    while(r--){
        int fx, fy, tx, ty;
        cin >> fx >> fy >> tx >> ty;
        fx--, fy--, tx--, ty--;
        while(fx != tx || fy != ty){
            if(m[fy][fx] == 0) m[fy][fx]++, tree++;
            if(tx > fx) fx++;
            else if(tx < fx)fx--;
            if(ty > fy) fy++;
            else if(ty < fy)fy--;
        }
        if(m[fy][fx] == 0) m[fy][fx]++, tree++;
    }
    cout << tree;
    
    return 0;

}