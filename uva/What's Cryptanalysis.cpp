#include<bits/stdc++.h>
using namespace std;

int main(){

    int r;
    cin >> r;
    // r++;
    map<char, int> ans;
    string s;
    while(getline(cin, s), r--){
        for(auto c:s) if(isalpha(c)) ans[toupper(c)]++;
    }
    for(auto c:s) if(isalpha(c)) ans[toupper(c)]++;
    vector<pair<char, int>> v(ans.begin(), ans.end());
    sort(v.begin(), v.end(), [](auto &a, auto &b){
        if(a.second == b.second) return a.first < b.first;
        return a.second > b.second;
    });
    for(auto it:v) cout << it.first << " " << it.second << endl;

    return 0;
    
}