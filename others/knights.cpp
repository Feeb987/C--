#include<bits/stdc++.h>
using namespace std;
long long minPath = __LONG_LONG_MAX__;
int rule[8][2] = {{-2, 1}, {-1, 2}, {1, 2}, {2, 1}, {2, -1}, {1, -2}, {-1, -2}, {-2, -1}};
map<long long, set<vector<string>>> m;
string s, e;
set<string> o;

void dfs(long long step, string xy, vector<string> path){
    path.push_back(xy);
    int x = xy[0] - 'a', y = xy[1] - '0';
    if(xy == e){
        if(step <= minPath){
            m[step].insert(path);
            minPath = min(minPath, step);
        }
    }
    else if(step <= minPath){
        for(int i = 0;i < 8;i++){
            int nx = x + rule[i][1], ny = y + rule[i][0];
            string nxy = string(1, (char)(nx + 'a')) + to_string(ny);
            if(nx >= 0 && nx < 8 && ny > 0 && ny <= 8 && !o.count(nxy) && find(path.begin(), path.end(), nxy) == path.end()) dfs(step+1, nxy, path);
        }
    }
}

int main(){
    string t;
    int a = 0;
    while(cin >> s >> e){
        a++;
        o.clear();
        m.clear();
        minPath = __LONG_LONG_MAX__;
        while(cin >> t){ 
            if(t=="xx") break;
            o.insert(t);
        }
        vector<string> v;
        dfs(0, s, v);
        cout << "\nThe shortest solution is " << minPath << " move(s).";
        for(auto it : m[minPath]){
            cout << "\nSolution: ";
            for(auto i : it) cout << i << " ";
        }
        cout << "\n";
    }

    return 0;

}