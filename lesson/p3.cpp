#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, idx;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v) cin >> it;
    cin >> idx;
    idx = n - idx;
    for(int i = 0;i < n;i++) cout << v[(idx+i) % n] << " ";

    return 0;
    
}