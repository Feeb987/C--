#include<bits/stdc++.h>
using namespace std;

int main(){

    int c1, n, i, j, pn = 0;
    string a1, p1, p[1000];
    vector<string> a[1000];
    vector<int> c[1000];
    cin >> n;
    while(n--){
        cin >> a1 >> c1 >> p1;
        i = find(p, p+pn, p1) - p;
        if(i == pn) p[pn++] = p1;
        j = find(a[i].begin(), a[i].end(), a1) - a[i].begin();
        if(j == a[i].size()){
            a[i].push_back(a1);
            c[i].push_back(0);
        }
        c[i][j] += c1;
    }
    for(i = 0;i < pn;i++){
        cout << p[i] << ":" << a[i][0] << " " << c[i][0];
        for(j = 1;j < a[i].size();j++) cout << "," << a[i][j] << " " << c[i][j];
        cout << endl;
    }

    return 0;

}