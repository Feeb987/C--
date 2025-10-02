#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while(cin >> n && n > 0){
        int x[n] = {0}, y[n] = {0}, in, ax = 0, ay = 0, s = 0;
        for(int i = 0;i < n;i++){
            for(int l = 0;l < n;l++){
                cin >> in;
                x[l] += in, y[i] += in;
                if(i == n-1 && x[l] % 2 == 1) ax = l+1, s++;
                if(l == n-1 && y[i] % 2 == 1) ay = i+1, s++;
            }
        }
        if(!s) cout << "OK\n";
        else if(s == 2 && ay > 0 && ax > 0) cout << "(" << ay << "," << ax << ")\n";
        else cout << "Corrupt\n";
    }

    return 0;
    
}