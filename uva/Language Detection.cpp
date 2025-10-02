#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    map<string, string> l = {
        {"HELLO", "ENGLISH"},
        {"HOLA", "SPANISH"},
        {"HALLO", "GERMAN"},
        {"BONJOUR", "FRENCH"},
        {"CIAO", "ITALIAN"},
        {"ZDRAVSTVUJTE", "RUSSIAN"}
    };
    int i = 1;
    while(cin >> str && str != "#") cout << "Case " << i++ << ": " << ((l[str] != "")? l[str] : "UNKNOWN") << endl;

    return 0;
    
}