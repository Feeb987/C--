#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll n, i = 1;
    while(cin >> n){
        set<ll> s;
        ll arr[n];
        bool isB2 = true;

        for(ll i = 0;i < n;i++){
            cin >> arr[i];
            if(arr[i] < 1) isB2 = false;
        }
        if(isB2){
            for(ll i = 0;i < n;i++){
                for(ll l = 0;l <= i;l++){
                    ll sum = arr[i] + arr[l];
                    if(s.count(sum) || arr[l] > arr[i]){
                        isB2 = false;
                        break;
                    }
                    s.insert(sum);
                }
            }
        }
        s.clear();
        if(isB2) cout << "Case #" << i << ": It is a B2-Sequence.\n";
        else cout << "Case #" << i << ": It is not a B2-Sequence.\n";
        i++;
    }

    return 0;
    
}