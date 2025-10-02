#include <bits/stdc++.h>
using namespace std;

// 可使用的硬幣面額（單位為分）
const vector<int> coins = {1, 5, 10, 25, 50};

// 最大金額為 30000 分
const int MAX = 30001;

int main() {
    // dp[i] 代表組成 i 分的方法數
    vector<long long> dp(MAX, 0);
    dp[0] = 1; // 組成 0 元的方式只有一種（什麼都不選）

    // 動態規劃：對每一種硬幣進行加總組合計算
    for (int c : coins) {
        for (int i = c; i < MAX; ++i) {
            dp[i] += dp[i - c]; // 加上使用這枚硬幣的組合數
        }
    }

    int n;
    // 多筆測資，每行一個整數
    while (cin >> n) {
        if (dp[n] == 1)
            cout << "There is only 1 way to produce " << n << " cents change." << endl;
        else
            cout << "There are " << dp[n] << " ways to produce " << n << " cents change." << endl;
    }

    return 0;
}
