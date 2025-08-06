#include<bits/stdc++.h>
using namespace std;
string str;

long long f(){
    long long a = 1, b = 0;
    if(str == "S") cin >> str;
    else if(str == "IF"){
        cin >> str;
        while(str != "ELSE") a *= f();
        b = 1;
        cin >> str;
        while(str != "END_IF") b *= f();
        cin >> str;
    }

    return a + b;
}

int main(){

    int r;
    cin >> r;
    while(r--){
        long long ans = 1;
        cin >> str;
        while(str != "ENDPROGRAM") ans *= f();
        cout << ans << endl;
    }
    
    return 0;

}