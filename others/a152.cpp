#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, f, s = 0;
    cin >> a;
    int d[10000];
    for(int i = 0;i < a;i++) cin >> d[i];
    cin >> f;
    bool found = false;
    int l = 0, r = a-1;
    while(l <= r){
        int m = (l + r) / 2;
        s++;
        if(d[m] == f){
            cout << m << " ";
            found = true;
            break;
        }
        else if(d[m] > f) r = m - 1;
        else l = m + 1;
    }
    if(!found) cout << "not found ";
    cout << s;

    return 0;
    
}