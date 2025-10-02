#include<bits/stdc++.h>
using namespace std;

int main(){

    string str;
    while (getline(cin, str)){
        int count = 0;
        string tem;
        for(auto c : str){
            if((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) tem += c;
            else{
                if(tem != "")count++;
                tem = "";
            }
        }
        if(tem != "")count++;
        cout << count << endl;
    }
    

    return 0;
    
}