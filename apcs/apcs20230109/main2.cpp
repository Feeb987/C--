#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, q, r, index = 0;
    string str1, str2;
    cin >> k >> q >> r >> str1;
    str2 = str1;
    vector<int> c(k);
    vector<string> v(q);
    for(int i = 0;i < q;i++){
        for(int l = 0;l < k;l++) cin >> c[l];
        for(int l = 0;l < k;l++) str2[c[l]-1] = str1[l];
        str1 = str2;
        v[index++] = str1;
    }
    for(int i = 0;i < r;i++){
        for(int l = 0;l < q;l++) cout << v[l][i];
        cout << endl;
    }

    return 0;
    
}