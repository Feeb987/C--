#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, c, a, b, tc;
    cout << setfill('0');
    for(tc = 0;cin >> n, n;tc++){
        if(tc) cout << endl;
        c = 0;
        for(a = 1234;a <= 98765/n;a++){
            string s = to_string(a*n);
            s += to_string(a + 100000);
            sort(s.begin(), s.end());
            if(s == "01123456789"){
                cout << a*n << " / " << setw(5) << a << " = " << n << endl;
                c++;
            }
        }
        if(!c) cout << "There are no solutions for " << n << ".\n";
    }

    return 0;
    
}