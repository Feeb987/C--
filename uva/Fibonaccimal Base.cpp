#include<bits/stdc++.h>
using namespace std;

bool v(int a, int b){
    return a > b;
}

int main(){

    int r;
    cin >> r;
    while(r--){
        int in, o = 1, n = 1;
        cin >> in;
        vector<int> arr;
        arr.push_back(1);
        while(in > n){
            n = n + o;
            o = n - o;
            if(n <= in) arr.push_back(n);
            else break;
        }
        sort(arr.begin(), arr.end(), v);
        cout << in << " = ";
        for(auto i : arr){
            if(in >= i){
                cout << 1;
                in -= i;
            }
            else cout << 0;
        }
        cout << " (fib)\n";
    }

    return 0;
    
}