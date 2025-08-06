#include<bits/stdc++.h>
using namespace std;
int k;

long long ans = 0;

void dfs(long long c){
    if(c >= pow(10, k-1) * 2){
        long long r = sqrt(c);
        if(r * r == c) ans = c;
    }
    else{
        c *= 10;
        for(int i = 0;i <= 8;i+=2){
            if(ans > 0) break;
            if(c+i > 0) dfs(c+i);
        }
    }
}

int main(){

    int time;
    cin >> time;
    while(time--){
        ans = 0;
        cin >> k;
        if(k > 0) dfs(0);
        cout << ans << "\n";
    }

    return 0;

}