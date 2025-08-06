#include<bits/stdc++.h>
using namespace std;
int m = 0;

void f(int n, int a, int b){
    if(!n) return;
    int t = 3 - a - b;
    f(n-1, a, t);
    cout << "ring " << n << " : " << char(a+'A') << " => " << char(b+'A') << endl;
    m++;
    f(n-1, t, b);
}

int main(){

    int n, a = 0, b, t;
    cin >> n;
    while(n--){
        b = n % 3;
        t = 3 - a - b;
        if(a == b) continue;
        f(n, a, t);
        cout << "ring " << n+1 << " : " << char(a+'A') << " => " << char(b+'A') << endl;
        m++;
        a = t;
    }
    cout << "共需" << m << "個移動";

    return 0;

}