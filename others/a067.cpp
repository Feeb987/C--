#include<bits/stdc++.h>
using namespace std;

int main(){

    string str, ans;
    getline(cin, str);
    for(auto c : str){
        if(isupper(c)) ans += char((c - 'A' + 13) % 26 + 'A');
        else if(islower(c)) ans += char((c - 'a' + 13) % 26 + 'a');
        else ans += c;
    }
    cout << ans;

    return 0;

}