#include<bits/stdc++.h>
using namespace std;

int main(){

    char n;
    int r;
    cin >> n >> r;
    map<char, vector<vector<int>>> player;
    for(int i = 0;i < r;i++){
        cin >> n;
        vector<vector<int>> board(4, vector<int>(4));
        for (int l = 0; l < 4; l++) {
            for (int k = 0; k < 4; k++) {
                cin >> board[l][k];
            }
        }
        player[n] = board;
    }
    vector<char> ans;
    vector<int> ansn;
    cin >> n;
    for(int l = 0;l < 16;l++){
        int b;
        cin >> b;
        if(ans.empty()){
            ansn.push_back(b);
            for(auto &it : player)
                for(int j = 0;j < 4;j++)
                    for(int k = 0;k < 4;k++)
                        if(it.second[j][k] == b) it.second[j][k] = -1;
            for (auto &it : player) {
                auto &board = it.second;
                bool bingo = false;
                for (int i = 0; i < 4; i++) {
                    bool row = true;
                    for (int j = 0; j < 4; j++) {
                        if (board[i][j] != -1) row = false;
                    }
                    if (row) bingo = true;
                }
                for (int j = 0; j < 4; j++) {
                    bool col = true;
                    for (int i = 0; i < 4; i++) {
                        if (board[i][j] != -1) col = false;
                    }
                    if (col) bingo = true;
                }
                bool diag1 = true;
                for (int i = 0; i < 4; i++) {
                    if (board[i][i] != -1) diag1 = false;
                }
                if (diag1) bingo = true;
                bool diag2 = true;
                for (int i = 0; i < 4; i++) {
                    if (board[i][3 - i] != -1) diag2 = false;
                }
                if (diag2) bingo = true;
                if (bingo) ans.push_back(it.first);
            }
        }
    }
    for (auto c : ansn) cout << c << " ";
    for (auto c : ans) cout << c << " ";
    cout << endl;


    return 0;
    
}