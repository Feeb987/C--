#include<bits/stdc++.h>
using namespace std;

int main(){

    string num;
    while (cin >> num && num != "0"){
        int rem = 0;
        for(char c : num){
            int digit = c - '0';
            rem = (rem * 10 + digit) % 17;
        }
        cout << (rem == 0 ? 1 : 0) << endl;
    }

    return 0;
    
}