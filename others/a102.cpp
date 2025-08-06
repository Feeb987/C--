#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main(){

    int m, n;

    int dx[8] = {-1, -1, -1, 0, 0, 1, 1, 1}; 
    int dy[8] = {-1, 0, 1, -1, 1, -1, 0, 1}; 

    char grid[100][100];
    bool visited[100][100];

    function<void(int, int)> dfs = [&](int x, int y) {
        visited[x][y] = true;
        for(int d = 0; d < 8; d++){
            int nx = x + dx[d];
            int ny = y + dy[d];
            if(nx >= 0 && nx < m && ny >= 0 && ny < n && grid[nx][ny] == '@' && !visited[nx][ny]){
                dfs(nx, ny);
            }
        }
    };

    while(cin >> m >> n){ 
        if(m == 0 && n == 0) break; 

        memset(visited, 0, sizeof(visited));

        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                cin >> grid[i][j];
            }
        }

        int count = 0;
        for(int i = 0; i < m; i++){
            for(int j = 0; j < n; j++){
                if(grid[i][j] == '@' && !visited[i][j]){
                    dfs(i, j);
                    count++;
                }
            }
        }
        cout << count << endl;
    }

    return 0;
    
}