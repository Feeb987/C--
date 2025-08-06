#include<bits/stdc++.h>
using namespace std;

int main(){

    int tc, n, m, i, t, x;
    cin >> tc;
    while(tc--){
        cin >> n >> m;
        deque<int> q(n);
        for(int &x : q) cin >> x;
        t = 0;
        while(1){
            for(i = 1;i < q.size();i++) if(q[i] > q[0]) break;
            if(i < q.size()) q.push_back(q[0]);
            else{
                t++;
                if(m == 0) break;
            }
            q.pop_front();
            m = (m + q.size() -1) % q.size();
        }
        cout << t << endl;
    }

    return 0;

}