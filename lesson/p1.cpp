#include<bits/stdc++.h>
using namespace std;

int main(){

    int n;
    float num = 0;
    cin >> n;
    vector<int> v(n);
    for(auto &it:v){
        cin >> it;
        num += it;
    }
    sort(v.begin(), v.end());
    cout << "總分：" << num << "\n平均：" << num/n << "\n最高分：" << v[n-1] << "\n最低分：" << v[0];

    return 0;
    
}