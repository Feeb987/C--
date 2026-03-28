#include<bits/stdc++.h>
using namespace std;

int main(){

    int c5, c10, c20, c50, m1, m2;
    map<int, int> t = {{1, 5}, {2, 10}, {3, 20}, {4, 50}, {5, 100}, {6, 200}};
    float m;
    while(cin >> c5 >> c10 >> c20 >> c50 >> m1 >> m2, c5){
        cin >> m;
        int num = m * 100, c = 0, u[6] = 0;
        vector<vector<vector<int>>> dp(7, vector<vector<int>>(7, vector<int>(2, 0)));
        int
    }

    return 0;
    
}
/*
2 4 2 2 1 0  0.95
2 4 2 0 1 0  0.55
0 0 0 0 0 0
95
  0   0   5  10  20  50 100 200
  0   0   0   0   0   0   0   0
  5   0   1   
 10   0   1
 20   0   1
 50   0   1
100   0   1
200   0   0
*/