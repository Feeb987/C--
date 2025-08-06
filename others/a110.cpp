#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    int p = 0, sp = 0;
    while(cin >> ch){
        if(ch == '(') sp++;
        else {
            if(!sp) break;
            sp--, p++;
        }
    }
    cout << ((cin || sp)? 0 : p) << endl;

    return 0;

}