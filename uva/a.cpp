#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    string str;
    cin >> n;
    while (n--){
        cin >> str;
        stack<char> s;
        bool flag = true;
        for(auto c : str){
            if(c == ' ') continue;
            if(c == '(' || c == '[') s.push(c);
            else if(!s.empty()){
                char t = s.top();
                s.pop();
                if(t == '(' && c == ')'){}
                else if(t == '[' && c == ']'){}
                else{
                    flag = false;
                    break;
                }
            }
            else{
                flag = false;
                break;
            }
        }
        cout << ((flag && s.empty())? "Yes\n" : "No\n");
    }

    return 0;
    
}