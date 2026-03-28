#include<bits/stdc++.h>
using namespace std;

int main(){

    int k;
    vector<int> v, lis;
    while(cin >> k, k) v.push_back(k);
    for(auto it:v){
        if(lis.empty() || it > lis.back()) lis.push_back(it);
        else *upper_bound(lis.begin(), lis.end(), it) = it;
    }
    cout << lis.size() << "\n-\n";
    for(auto it:lis) cout << it << endl;

    return 0;
    
}