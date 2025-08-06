#include<bits/stdc++.h>
using namespace std;

int main(){

    string s;
    int a, b;
    while(cin >> s){
        vector<int> stk;
        for(char c : s){
            if(isdigit(c)) stk.push_back(c - '0');
            else {
                b = stk.back(), stk.pop_back();
                a = stk.back(), stk.pop_back();
                if(c == '+') stk.push_back(a + b);
                else if(c == '-') stk.push_back(a - b);
                else if(c == '*') stk.push_back(a * b);
                else if(c == '/') stk.push_back(a / b);
                else if(c == '%') stk.push_back(a % b);
            }
        }
        cout << stk.back() << endl;
    }

    return 0;
}