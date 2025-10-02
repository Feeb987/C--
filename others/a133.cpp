#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i, j, m[50], s, mxs = -100;
    cin >> n;
    for(i = 0;i < n;i++){
        cin >> m[i];
        s = 0;
        for(j = i;j >= 0;j--){
            s += m[j];
            mxs = max(mxs, s);
        }
    }
    cout << mxs << endl;

    return 0;
    
}