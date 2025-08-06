#include<bits/stdc++.h>
using namespace std;

int main(){

    int N, M;
    cin >> N >> M;

    vector<vector<int>> graph(N + 1); 

    for(int i = 0; i < M; ++i){ 
        int u, v;
        cin >> u >> v; 
        graph[u].push_back(v);
    }

    int A, B;
    cin >> A >> B; 

    vector<bool> visited(N + 1, false);

    function<void(int)> dfs = [&](int u){
        visited[u] = true; 
        for(int v : graph[u]){ 
            if(!visited[v]){ 
                dfs(v);
            }
        }
    };

    dfs(A);

    if(visited[B]) 
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
    
}