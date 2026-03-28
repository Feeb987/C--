#include<bits/stdc++.h>
#include<sstream>
#define v first
#define p second
#define d pair<int, string>
using namespace std;
bool flag = true;
set<string> se;

d f(string s){
    s = s.substr(1, s.size()-2);
    int cur = 0, i = s.find(",");
    cur = stoi(s.substr(0, i));
    s = s.substr(i+1);
    if(!se.count(s)) se.insert(s);
    else flag = false;
    return {cur, s};
}


int main(){

    string s;
    while (cin >> s){
        if(s.empty()) continue;
        vector<d> tree;
        if(s != "()"){
            tree.push_back(f(s));
            while(cin >> s && s != "()") tree.push_back(f(s));
        }
        else flag = false;
        if(flag){
            sort(tree.begin(), tree.end(), [](d a, d b){
                if(a.p.size() != b.p.size()) return a.p.size() < b.p.size();
                for(int i = 0;i < a.p.size();i++) if(a.p[i] != b.p[i]) return a.p[i] < b.p[i];
            });
        }
        int nn = 0;
        if(tree.empty()) flag = false;
        else if(tree[0].p.size() > 0) flag = false;
        queue<string> q;
        q.push("L");
        q.push("R");
        while(!q.empty() && flag){
            string str = q.front();
            q.pop();
            if(se.count(str)){
                nn++;
                q.push(str+'L');
                q.push(str+'R');
            }
        }
        if(nn == se.size()-1 && flag) for(int i = 0;i < tree.size();i++) cout << tree[i].v << (i < tree.size()-1 ? " " : "");
        else cout << "not complete";
        cout << endl;
        se.clear();
        flag = true;
    }
    

    return 0;
    
}