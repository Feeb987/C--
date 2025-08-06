#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, q, s, k = 0, t[1000], t1 = 0, f = 0, b = 0;
    cin >> n;
    while(n--){
        cin >> q >> s;
        while(f < b && t[f] <= q) f++;
        k = max(k, b - f);
        t1 = max(q, t1) + s;
        t[b++] = t1;
    }
    cout << k << endl;

    return 0;

}