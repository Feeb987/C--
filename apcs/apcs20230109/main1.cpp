#include<bits/stdc++.h>
using namespace std;

int main(){

    int k, mn = -1, a = 0, b = 0;
    cin >> k;
    map<int, vector<int>> m;
    for(int i = 0;i < k;i++){
        int t, s;
        cin >> t >> s;
        if(s == -1) b++;
        else if(mn < s){
            m[s].push_back(t);
            mn = s;
        }
    }
    a = mn - k - b*2;
    if(a < 0) a = 0;
    cout << a << " " << m[mn].front();

    return 0;
    
}