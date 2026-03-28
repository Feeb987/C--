#include<bits/stdc++.h>
#include<fstream>
using namespace std;

int main(){
    
    ifstream in("pa.in");
    int a, b;
    while(in >> a >> b && a > 0 && b > 0){
        vector<int> v(a);
        set<int> s;
        for(auto &it:v) in >> it;
        sort(v.begin(), v.end());
        int c = (b / 2), d;
        if(a%2) d = a-c;
        else d = a-c-1;
        for(int i = c;i < d;i++){
            int num = v[i-c];
            if(b % 2) num = abs(v[i+c] - num);
            else num = abs(v[i+c-1] - num);
            s.insert(num);
        }
        cout << *s.begin() << endl;;
    }

    return 0;
    
}
