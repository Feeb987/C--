#include<bits/stdc++.h>
using namespace std;

int main(){

    int r, c;
    cin >> r >> c;
    int m1[r][c], m2[r][c];
    for(int i = 0;i < 2;i++){
        for(int l = 0;l < r;l++){
            for(int k = 0;k < c;k++) if(!i) cin >> m1[l][k]; else cin >> m2[l][k];
        }
    }

    double maxLike = 0, tmp1 = 0, tmp2 = 0, tmp3 = 0, tmp4 = 0;
    for(int i = 0;i < r;i++){
        for(int l = 0;l < c;l++){
            if(m1[i][l] == m2[i][l]) tmp1++;
            if(m1[r-i-1][l] == m2[i][l]) tmp2++;
            if(m1[i][c-l-1] == m2[i][l]) tmp3++;
            if(m1[r-i-1][c-l-1] == m2[i][l]) tmp4++;
        }
    }
    
    maxLike = max(tmp1, max(tmp2, max(tmp3, tmp4))) / (r*c);
    cout << int(maxLike*100) << "%";

    return 0;
    
}