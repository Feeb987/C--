#include<bits/stdc++.h>
#define w first
#define v second
using namespace std;

int main(){

    int n;
    while (cin >> n) {
        vector<vector<int>> box(n+1, vector<int>(101, 0));
        vector<pair<int, int>> item(n);
        for(auto &it:item) cin >> it.w >> it.v;
        for(int i = 0;i <= n;i++){
            for(int l = 0;l <= 100;l++){
                if(i == 0 || l == 0) box[i][l] = 0;
                else if(item[i-1].w > l) box[i][l] = box[i-1][l];
                else box[i][l] = max(box[i-1][l], box[i-1][l-item[i-1].w] + item[i-1].v);
            }
        }
        cout << box[n][100] << endl;
    }
    

    return 0;
    
}