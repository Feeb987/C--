#include<bits/stdc++.h>
using namespace std;

int fun(int a){
    
    if(a > 1) return a * fun(a-1);
    return 1;
    
}

int main(){
    
    int n;
    cin >> n;
    cout << fun(n);

    return 0;
    
}
/*
5
5 * f(5-1)
4 * f(4-1)
3 * f(3-1)
2 * f(2-1)
    1
*/