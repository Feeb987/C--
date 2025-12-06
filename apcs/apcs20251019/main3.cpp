#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, mxn = 0;
    cin >> n;
    string str, mxh;
    map<string, int> ans;
    for(int i = 0;i < n;i++){
        cin >> str;
        string head = str.substr(0, 3);
        int odd = 0, even = 0;
        for(int l = 0;l < 12;l++) if((l+1)%2 == 1) odd += str[l]-'0'; else even += str[l]-'0';
        
        int tmp = (odd+3*even)%10+(str[12]-'0');
        if(tmp == 10 || tmp == 0) ans[head]++;

        if(ans[head] > mxn){
            mxn = ans[head];
            mxh = head;
        }
    }
    
    cout << mxh << " " << mxn;

    return 0;
    
}
/*

471932467


*/