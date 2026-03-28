#include<bits/stdc++.h>
#include<sstream>
using namespace std;

int main(){

    int n, t;
    string s;
    cin >> n;
    vector<int> v(n);
    for(int i = 0;i < n;i++){
        cin >> t;
        v[t-1] = i;
    }
    while(getline(cin, s)){
        if(s.empty()) continue;
        vector<int> a(n);
        istringstream sin(s);
        int num, i = 0;
        while (sin >> num) a[num-1] = i++;
        vector<vector<int>> lcs(n+1, vector<int>(n+1, 0));
        for(int i = 1;i <= n;i++){
            for(int l = 1;l <= n;l++){
                if(v[i-1] == a[l-1]) lcs[i][l] = lcs[i-1][l-1] + 1;
                else lcs[i][l] = max(lcs[i][l-1], lcs[i-1][l]);
            }
        }
        cout << lcs[n][n] << endl;
    }
    

    return 0;
    
}