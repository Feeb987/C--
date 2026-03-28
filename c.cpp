#include<bits/stdc++.h>
#define f first
#define s second
using namespace std;

int main(){

    vector<int> a, b, c;
    int n;
    cin >> n;
    while(n--) {
        int in;
        cin >> in;
        a.push_back(in);
        if(in >= 60) b.push_back(in);
        else c.push_back(in);
    }
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    sort(c.begin(), c.end());
    for(auto it:a) cout << it << " ";
    cout << endl;
    if(c.size() > 0) cout << c.back();
    else cout << "best case";
    cout << endl;
    if(b.size() > 0) cout << b.front();
    else cout << "worst case";
    
    return 0;
    
}