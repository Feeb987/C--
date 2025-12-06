#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    while(cin >> str && str != "0"){
        int ans = 0;
        bool t = 1;
        for(auto c : str) {
            if(isupper(c) || islower(c)) {
                c = tolower(c);
                ans += c-'a'+1;
                t = 1;
            }
            else {
                t = 0;
                cout << "Fail\n";
                break;
            }
        }
        if(t != 0) cout << ans << "\n";
    }

    return 0;
    
}