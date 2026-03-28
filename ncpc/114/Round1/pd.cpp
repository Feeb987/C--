#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    
    ifstream in("pd.in");
    int n, m;
    while(cin >> n >> m && n != 0 && m != 0){
        vector<int> v(n);
        int a = n / m, l = n % m;
        for(auto &it:v) cin >> it;
        sort(v.begin(), v.end());
    }

    return 0;
    
}
/*

*/