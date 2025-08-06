#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i, st[1001], p, ca, cb;
    while(cin >> n, n){
        cin >> cb;
        while(cb){
            st[0] = p = 0, ca = 1;
            for(i = 0;i < n;i++){
                while(cb > st[p]) st[++p] = ca++;
                if(cb == st[p]) p--;
                cin >> cb;
            }
            cout << (p? "No" : "Yes") << endl;
        }
        cout << endl;
    }

    return 0;

}