#include<bits/stdc++.h>
using namespace std;

int main(){

    priority_queue<int> s;
    priority_queue<int, vector<int>, greater<int>> b;
    int n;
    while(cin >> n){
        if(b.empty() || n >= b.top()) b.push(n);
        else s.push(n);
        if(b.size()>s.size()){
            s.push(b.top());
            b.pop();
        }
        else if(s.size()>b.size()+1){
            b.push(s.top());
            s.pop();
        }
        if(s.size()==b.size()) cout << (s.top()+b.top())/2;
        else if(s.size()>b.size()) cout << s.top();
        else cout << b.top();
        cout << endl;
    }

    return 0;
    
}