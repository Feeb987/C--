#include<bits/stdc++.h>
using namespace std;

int main(){

    int a, b;
    while(cin >> a >> b && a > -1 && b > -1){
        if(a > b) a += b, b = a - b, a -= b;
        int m = abs((100+a) - b), t = abs(a-b);
        cout << min(m, t) << endl;
    }

    return 0;
    
}