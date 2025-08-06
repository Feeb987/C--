#include<bits/stdc++.h>
using namespace std;

int main(){

    int t, d, i, j;
    cin >> t;
    while(t--){
        cin >> d >> i;
        i--, j = 1;
        while(--d){
            j = j * 2 + i % 2;
            i /= 2;
        }
        cout << j << endl;
    }

    return 0;

}