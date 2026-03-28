#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, o = 0, num = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v){
        cin >> it;
        if(!(it % 2)) num += it, o +=1;
    }
    reverse(v.begin(), v.end());
    for(auto &it:v) cout << it << " ";
    cout << "\n偶數個體：" << o << "\n偶數總和：" << num;

    return 0;
    
}