#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    cin >> n;
    for(int i = 0;i < n;i++){
        int m = 0;
        map<int, vector<string>> g;
        for(int l = 0;l < 10;l++){
            int index;
            string str;
            cin >> str >> index;
            g[index].push_back(str);
            m = max(m, index);
        }
        cout << "Case #" << i+1 << ":\n";
        for(auto str : g[m]) cout << str << endl;
    }
    

    return 0;
    
}