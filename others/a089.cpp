#include <bits/stdc++.h>
using namespace std;

int board[8][8];              // 棋盤權重
int maxSum;                   // 當前最大加總
bool col[8], diag1[15], diag2[15]; // 紀錄欄位與對角線是否被佔用

// 深度優先搜尋，row 是目前要放皇后的列，sum 是目前的總分
void dfs(int row, int sum) {
    if (row == 8) {           // 8 列都放完，更新最大總和
        maxSum = max(maxSum, sum);
        return;
    }
    for (int c = 0; c < 8; ++c) {
        if (col[c] || diag1[row - c + 7] || diag2[row + c]) continue;
        col[c] = diag1[row - c + 7] = diag2[row + c] = true;
        dfs(row + 1, sum + board[row][c]);  // 放皇后並累加分數
        col[c] = diag1[row - c + 7] = diag2[row + c] = false; // 回溯
    }
}

int main() {
    int k;
    cin >> k;  // 測資組數
    while (k--) {
        // 讀取 8x8 棋盤
        for (int i = 0; i < 8; ++i)
            for (int j = 0; j < 8; ++j)
                cin >> board[i][j];

        // 初始化
        memset(col, 0, sizeof(col));
        memset(diag1, 0, sizeof(diag1));
        memset(diag2, 0, sizeof(diag2));
        maxSum = 0;

        dfs(0, 0);  // 從第 0 列開始放皇后

        cout << maxSum << endl; // 輸出該組最大分數
    }

    return 0;
}