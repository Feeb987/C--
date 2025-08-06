#include<bits/stdc++.h>
using namespace std;
int t;

int f91(int i){
    if(i <= 100) return f91(f91(i+11));
    return i-10;
}

int main(){

    while(cin >> t && t != 0) cout << "f91(" << t << ") = " << f91(t) << endl;

    return 0;

}
