#include<bits/stdc++.h>
using namespace std;

int main(){

    char ch;
    vector<char> s;
    while(cin >> ch){
        if(ch == '(') s.push_back(ch);
        else if(ch == '+' || ch == '-'){
            while(s.size() && s.back() != '(') cout << s.back(), s.pop_back();
            s.push_back(ch);
        }
        else if(ch == '*' || ch == '/'){
            if(s.size() && s.back() != '(' && (s.back() == '*' || s.back() == '/')) cout << s.back(), s.pop_back();
            s.push_back(ch);
        }
        else if(ch == ')'){
            while(s.back() != '(') cout << s.back(), s.pop_back();
            s.pop_back();
        }
        else cout << ch;
    }
    while(s.size()) cout << s.back(), s.pop_back();
    cout << endl;

    return 0;

}