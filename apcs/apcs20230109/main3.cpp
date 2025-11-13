#include<bits/stdc++.h>
#define in long long
using namespace std;

in cal(string str);
in f(string str);

signed main(){
    
    string str;
    cin >> str;
    cout << cal(str);
    
    return 0;
    
}

in cal(string str){
    in n1 = 0, n2 = 0, n3 = 0, a = 0;
    string ss;
    queue<string> s;
    for(char c : str){
        if(c=='f') a++;
        if(c==')') a--;
        if(c=='*' && a == 0) {
            s.push(ss);
            ss.clear();
        }
        else ss += c;
    }
    s.push(ss);
    while(!s.empty()){
        n1 = 0, n2 = 0, a = 0, ss = "";
        string st = s.front();s.pop();
        for(auto c : st){
            if(c=='f') a++;
            if(c==')') a--;
            if(!ss.empty() && a == 0) n1 += f(ss), ss.clear();
            else if(isdigit(c) && a == 0) n2 = n2 * 10 + (c-'0');
            else if(a > 0) ss += c;
            else n1 += n2, n2 = 0;
        }
        n1 += n2;
        if(n3==0) n3 = n1;
        else n3 *= n1;
    }
    return n3;
}

in f(string str){
    string ss, cur;
    set<in> l;
    in a = 0;
    if (str.size() >= 2 && str[0] == 'f' && str[1] == '(') str = str.substr(2, str.length());
    for(char c : str){
        if(c=='f') a++;
        if(c==')') a--;
        if(!ss.empty() && a <= 0) cur += to_string(f(ss)), ss.clear();
        else if(c==',' && a <= 0) l.insert(cal(cur)), cur.clear();
        else if(c != ')' && a <= 0) cur += c;
        else ss+=c;
    }
    l.insert(cal(cur));
    return *prev(l.end()) - *l.begin();
}