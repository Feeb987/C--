#include<bits/stdc++.h>
using namespace std;
set<int> d;

bool isPrime(int x){
    if(x < 2) return 0;
    if(x == 2) return 1;
    if(x % 2 == 0) return 0;
    for(int i = 3;i*i <= x;i+=2) if(x%i == 0) return 0;
    d.insert(x);
    return 1;
}

int digitSum(int x){
    int a = 0;
    while(x > 0){
        a += x % 10;
        x /= 10;
    }
    return a;
}

int main(){

    vector<int> dp(1000001, 0), p;
    p.push_back(2);
    d.insert({2,3,5,7});
    for(int i = 1;i <= 1000000;i++) dp[i] = dp[i-1]+(isPrime(i)? d.count(digitSum(i)):0);
    int r;
    cin >> r;
    while (r--){
        int f, s;
        cin >> f >> s;
        (s<f)&&(swap(s, f), true);
        cout << dp[s]-dp[f-1] << endl;
    }
    

    return 0;
    
}