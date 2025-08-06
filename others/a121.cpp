#include<bits/stdc++.h>
using namespace std;

stringstream ss;

int exp(){

    int v, op1, op2;
    char tok;
    ss >> tok;
    if(isdigit(tok)) ss.unget(), ss >> v;
    else if(tok == '('){
        op1 = exp();
        if((ss >> ws).get() != ',') throw "',' expected";
        op2 = exp();
        if((ss >> ws).get() != ',') throw "',' expected";
        ss >> tok;
        if(tok == '+') v = op1 + op2;
        else if(tok == '-') v = op1 - op2;
        else if(tok == '*') v = op1 * op2;
        else if(tok == '/'){
            if(op2 == 0) throw "devision by 0";
            v = op1 / op2;
        }
        else throw "operator expected";
        if((ss >> ws).get() != ')') throw "')' expected";
    }
    else throw "'(' or number expected";
    return v;
}

int main(){

    int n, v;
    string s;
    cin >> n >> ws;
    while(n--){
        getline(cin, s);
        ss.clear(), ss.str(s);
        try{
            v = exp();
            if(ss >> ws, !ss.eof()) throw "eol expected";
            cout << v << endl;
        }
        catch(const char *e){
            cout << e;
        }
    }

    return 0;

}