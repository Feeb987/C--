#include<bits/stdc++.h>
using namespace std;

int main(){

    int x, t[1024] = {}, i, d, maxd = 0;
    while(cin >> x){
        i = 1;
        for(d = 1;t[i];d++) i = 2 * i + (x > t[i]);
        t[i] = x;
        maxd = max(d, maxd);
    }
    cout << maxd;

    return 0;

}