#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;                  // 宣告輸入變數 n
    cin >> n;               // 讀入第 n 個醜數

    set<long long> seen;    // 用來記錄已經出現過的醜數（避免重複）
    priority_queue<long long, vector<long long>, greater<long long>> pq;
                            // 小根堆，保證每次取出最小的醜數

    pq.push(1);             // 起始數字 1 是第一個醜數
    seen.insert(1);         // 標記 1 已經出現

    long long curr = 1;     // 當前醜數
    for(int i = 1; i <= n; i++) {
        curr = pq.top();    // 取出當前最小的醜數
        pq.pop();           // 移除已經處理的

        // 把當前數字乘上 2、3、5 放入堆中（若沒出現過）
        for(int f : {2, 3, 5}) {
            long long next = curr * f;
            if (!seen.count(next)) {
                seen.insert(next);  // 標記這個數字
                pq.push(next);     // 加入堆中
            }
        }
    }

    cout << curr << endl;   // 輸出第 n 個醜數
    return 0;
}