#include<bits/stdc++.h>
using namespace std;

double f(double x) { return 2 - exp(x); }

int main(){

    double a = 0, b = 1, m = 0, m1 = 1;
    while(a != b && m != m1){
        m1 = m, m = (a+b)/2;
        if(f(m)*f(a)>0) a = m;
        else b = m;
    }
    cout << fixed << setprecision(6) << m << endl;

    return 0;
    
}