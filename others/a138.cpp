#include <bits/stdc++.h>
using namespace std;

struct Ticket {
    int cost;                       // 票價
    vector<int> cities;            // 聯票的城市列表
};

int main() {
    int n;                          // 聯票種類數
    cin >> n;

    vector<Ticket> tickets(n);      // 存每張聯票
    for (int i = 0; i < n; ++i) {
        int cost, count;
        cin >> cost >> count;
        tickets[i].cost = cost;
        tickets[i].cities.resize(count);
        for (int j = 0; j < count; ++j)
            cin >> tickets[i].cities[j];
    }

    int k;                          // 行程單城市數
    cin >> k;
    vector<int> route(k);           // 行程單上的城市順序
    for (int i = 0; i < k; ++i)
        cin >> route[i];

    const int INF = 1e9;
    vector<int> dp(k, INF);         // dp[i]：走到行程單第i個城市的最小費用
    vector<vector<int>> path(k);    // path[i]：走到第i個城市所使用的票編號組合

    dp[0] = 0;                      // 起點費用為0

    for (int i = 0; i < k; ++i) {   // 從行程單上的第 i 個城市開始
        for (int t = 0; t < n; ++t) {                      // 嘗試每張聯票
            auto& cities = tickets[t].cities;
            for (int s = 0; s < cities.size(); ++s) {      // 從聯票的第 s 個城市開始
                if (cities[s] != route[i]) continue;       // 必須對應行程單目前城市

                int pos = i;                                // 對應行程單的位置
                for (int e = s + 1; e < cities.size(); ++e) {
                    if (pos + 1 < k && cities[e] == route[pos + 1]) {
                        ++pos;                              // 成功匹配下一個行程單城市

                        // 如果這段可行而且費用更小就更新
                        if (dp[i] + tickets[t].cost < dp[pos]) {
                            dp[pos] = dp[i] + tickets[t].cost;
                            path[pos] = path[i];
                            path[pos].push_back(t + 1);     // 記錄使用第 t+1 張票
                        }
                    }
                }
            }
        }
    }

    cout << "Cost = " << dp[k - 1] << ", Tickets used:";
    for (int id = 0;id < path[k-1].size();id++) cout << (id == 0 ? " " : ", ") << path[k-1][id];
    cout << endl;

    return 0;
}