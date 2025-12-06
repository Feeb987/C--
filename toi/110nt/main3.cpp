#include<bits/stdc++.h>
using namespace std;

int main(){

    int l;
    cin >> l;
    vector<bool> isPrime(l+1, true);
    vector<long long> dp(l+1, 0);
    isPrime[0] = isPrime[1] = false;
    for(int i = 2;i <= l;i++) 
        if(isPrime[i]) 
            for(int k = i+i;k <= l;k+=i)
                isPrime[k] = false;
    
    for(int i = 1;i <= l;i++){
        long long b = LLONG_MAX;
        for(int k = 2;k <= i/2;k++){
            int j = i-k;
            if(isPrime[j] && isPrime[k]){
                long long c = i + dp[j] + dp[k];
                b = min(b, c);
            }
        }
        if(b != LLONG_MAX) dp[i] = b;
        else dp[i] = 0;
    }
    cout << dp[l];

    return 0;
    
}