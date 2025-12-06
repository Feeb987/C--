#include<bits/stdc++.h>
#define int long long int
using namespace std;

signed main(){

    int n, m, f = 1;
    cin >> n >> m;
    if(m == 0) {
        cout << "Go Kevin!!";
        return 0;
    }
    while(n > 0){
        n -= f;
        f += m;
    }
    cout << (n < 0? "No Stop!!" : "Go Kevin!!");

    return 0;
    
}