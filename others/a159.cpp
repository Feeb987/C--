#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    while (cin >> n && n > 0){
        int x[n] = {0}, y[n] = {0}, in, ax = 0, ay = 0, s = 0;
        for(int i = 0;i < n;i++){
            for(int l = 0;l < n;l++){
                cin >> in;
                y[i] += in;
                x[l] += in;
                if(i == n-1 && x[l] % 2 == 1) {
                    if(ax == 0) ax = l+1;
                    s++;
                }
                if(l == n-1 && y[i] % 2 == 1){
                    if(ay == 0) ay = i+1;
                    s++;
                }
            }
        }
        if(s == 0) cout << "OK\n";
        else if(s == 2 && ay != 0 && ax != 0) cout << "Change bit (" << ay << "," << ax << ")\n";
        else cout << "Corrupt\n";
    }
    

    return 0;

}