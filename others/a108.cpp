#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    char f;
    cin >> str >> f;
    f = toupper(f);
    for(int i = 0;i < str.length();i++) str[i] = toupper(str[i]);
    int a = str.find(f), b = str.find(f, a+1);
    while (b != -1){
        cout << b - a << ' ';
        a = b;
        b = str.find(f, a+1);
    }
    

    return 0;

}