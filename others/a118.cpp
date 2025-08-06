#include<bits/stdc++.h>
using namespace std;
int n[5] = {1};

void f(int i, int k){
    if(i < 4){
        int kf = int(sqrt(k/(5-i)));
        for(n[i] = n[i-1];n[i] <= kf;n[i]++) f(i+1, k - n[i] * n[i]);
        return;
    }
    n[4] = int(sqrt(k));
    if(n[4]*n[4] == k){
        for(int i = 1;i < 5;i++) cout << n[i] << " ";
        exit(0);
    }
}

int main(){

    int k;
    cin >> k;
    f(1, int(pow(2, k)));
    cout << "0";

    return 0;

}