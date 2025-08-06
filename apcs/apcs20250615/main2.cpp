#include<bits/stdc++.h>
using namespace std;

int main(){

    int m, n, k, ans = 0;
    cin >> m >> n >> k;
    vector<string> str(m);
    vector<int> p(m, 0);
    for(int i = 0;i < m;i++) cin >> str[i];
    while(k--){
        for(int i = 0;i < m;i++){
            int in;
            cin >> in;
            in%=n;
            p[i] += abs(n - in) % n;
        }
        for(int i = 0;i < n;i++){
            int nm = 1;
            map<char, int> ma;
            for(int l = 0;l < m;l++){
                char c = str[l][(p[l]+i)%n];
                if(ma[c] == 0) ma[c]++;
                else nm = max(++ma[c], nm);
            }
            ans += nm;
        }
    }
    cout << ans;
    

    return 0;

}