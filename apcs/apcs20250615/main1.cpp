#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, x1, y1, x2, y2, t = 0;
    cin >> k >> x1 >> y1 >> x2 >> y2;
    while(k>0){
        t+=k;
        if(t%x1==0) k-=y1;
        if(t%x2==0) k-=y2;
    }
    cout << t;

    return 0;

}