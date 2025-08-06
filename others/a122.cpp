#include<bits/stdc++.h>
using namespace std;
int d;
vector<int> c[100000];

int height(int n){
    vector<int> h(2);
    for(int ch : c[n]) h.push_back(-height(ch));
    sort(h.begin(), h.end());
    d = max(d, -h[0] - h[1]);
    return 1 - h[0];
}

int main(){

    ios::sync_with_stdio(0);
    int n, a, b, i, f[100000] = {};
    cin >> n;
    while(--n){
        cin >> a >> b;
        f[b] = 1, c[a].push_back(b);
    }
    for(i = 0;f[i];i++);
    d = 0;
    height(i);
    cout << d << endl;

    return 0;

}