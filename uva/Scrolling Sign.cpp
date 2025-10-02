#include<bits/stdc++.h>
using namespace std;

int main(){
    
    int r, k, w;
    set<string> s;
    cin >> r;
    while (cin >> k >> w){
        s.clear();
        string str[w], cur;
        for(int i = 0;i < w;i++) {
            cin >> str[i];
            int overlap = 0, size = cur.size()-1;
            if(i == 0) cur = str[i];
            else if(!s.count(str[i])){
                for(int j = 0;j < k;j++) if(str[i].substr(0, j+1) == cur.substr(size-j)) overlap = j+1;
                cur = cur + str[i].substr(overlap);
            }
            s.insert(str[i]);
        }
        cout << cur.size() << endl;
    }
    
    return 0;
    
}