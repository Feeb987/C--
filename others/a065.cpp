#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    int ans = 0;
    bool b = true;
    cin >> str;
    for(auto c : str){
        if(b) ans += c - '0';
        else ans -= c - '0';
        b = !b;
    } 
    cout << abs(ans);

    return 0;

}