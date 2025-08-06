#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, i;
    double a = 0, x1, y1, x2, y2, x3, y3;
    cin >> n >> x1 >> y1 >> x2 >> y2;
    for(i = 2;i < n;i++){
        cin >> x3 >> y3;
        a += x1*y2 - y1*x2 + x2*y3 - y2*x3 + x3*y1 - y3*x1;
        x2 = x3, y2 = y3;
    }
    cout << fixed << setprecision(2) << -a/2;

    return 0;

}