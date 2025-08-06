#include<bits/stdc++.h>
using namespace std;
int t;

int f(int i){
    if(i == 0) return 0;
    if(i == 1) return 1;
    return f(i-1) + f(i-2);
}

int main(){

    while(cin >> t)cout << f(t) << endl;

    return 0;

}
