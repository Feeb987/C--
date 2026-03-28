#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){

    ifstream in("pa.in");
    int n;
    in >> n;
    while(n--){
        int m, ans = 0, t = 1;
        in >> m;
        while(t < m){
            t *= 2;
            ans++;
        }
        cout << ans << endl;
    }

    return 0;
    
}