#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

int main(){

    ll in;
    while(cin >> in && in > 0){
        ll s = 0, count = 0;
        int t[INT16_MAX];
        while (in > 1){
            count += in % 2;
            t[s++] = in % 2;
            in /= 2;
        }
        t[s] = in;
        count += in;
        cout << "The parity of ";
        while(s >= 0) cout << t[s--];
        cout << " is " << count << " (mod 2).\n";
    }

    return 0;
    
}