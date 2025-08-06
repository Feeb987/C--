#include<bits/stdc++.h>
#define x first
#define y second
using namespace std;
string rule1[5] = {
    "abcde",
    "fghij",
    "klmno",
    "prstu",
    "vwxyz"
},
rule2[5] = {
    "EXAMP",
    "LBCDF",
    "GHIJK",
    "NORST",
    "UVWYZ"
};

int main(){

    int len;
    string str, ans;
    cin >> len >> str;
    reverse(str.begin(), str.end());
    if(isupper(str[0])){
        for(int i = 0;i < len;i+=2){
            char c1 = str[i], c2 = str[i+1];
            pair<int, int> xy1, xy2;
            for(int l = 0;l < 5;l++){
                for(int j = 0;j < 5;j++){
                    if(rule2[l][j] == c1) xy1.x = j, xy1.y = l;
                    if(rule2[l][j] == c2) xy2.x = j, xy2.y = l;
                }
            }
            ans += rule1[xy1.y][xy2.x];
            ans += rule1[xy2.y][xy1.x];
        }
    }
    else{
        for(int i = 0;i < len;i+=2){
            char c1 = str[i], c2 = str[i+1];
            pair<int, int> xy1, xy2;
            for(int l = 0;l < 5;l++){
                for(int j = 0;j < 5;j++){
                    if(rule1[l][j] == c1) xy1.x = j, xy1.y = l;
                    if(rule1[l][j] == c2) xy2.x = j, xy2.y = l;
                }
            }
            ans += rule2[xy1.y][xy2.x];
            ans += rule2[xy2.y][xy1.x];
        }
    }
    cout << ans;

    return 0;

}