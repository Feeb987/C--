#include<bits/stdc++.h>
using namespace std;

int main(){

    int time;
    cin >> time;
    set<int> b, w;
    vector<int> a;
    while(time--){
        int p;
        cin >> p;
        if(p<60) b.insert(p);
        else w.insert(p);
        a.push_back(p);
    }
    sort(a.begin(), a.end());
    for(auto it : a) cout << it << " ";
    if(b.empty()) cout << "\n" << "best case";
    else cout << "\n" << *b.rbegin();
    if(w.empty()) cout << "\n" << "worst case";
    else cout << "\n" << *w.begin();

    return 0;

}