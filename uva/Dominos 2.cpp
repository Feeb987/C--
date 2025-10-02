#include<bits/stdc++.h>
using namespace std;
vector<vector<int>> dominos(10000);
set<int> s;
int k, n, m, l, c = 0, id, ne;

void bfs(int id){
    s.insert(id);
    c++;
    for(auto i : dominos[id]) if(!s.count(i)) bfs(i);
}

int main(){
    
    cin >> k;
    while (k--){
        set<int> fallen;
        cin >> n >> m >> l;
        for(int i = 0;i < m;i++){
            cin >> id >> ne;
            dominos[id].push_back(ne);
        }
        queue<int> q;
        for(int i = 0;i < l;i++){
            cin >> id;
            bfs(id);
            s.clear();
            cout << c << endl;
            c = 0;
        }
        for (int i = 0; i < n; i++) dominos[i].clear();
    }
    

    return 0;
    
}
/*
7 4 23
1 2
2 3
4 5
5 6
*/

/*
2
5 8 2
1 2
1 3
2 3
3 2
3 4
4 1
4 2
4 5
*/