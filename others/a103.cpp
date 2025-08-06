#include<bits/stdc++.h>
using namespace std;
pair<int, int> f[50000];
int p;

void fun(int index){
    if(f[index].second != -1){
        f[index].second = -1;
        fun(f[index].first);
    }
}

int main(){

    int ans = 0;
    cin >> p;
    for(int i = 0;i < p;i++) cin >> f[i].first, f[i].second = 1;
    for(int i = 0;i < p;i++){
        if(f[i].second != -1){
            fun(i);
            ans++;
        }
    }
    cout << ans;

    return 0;
    
}