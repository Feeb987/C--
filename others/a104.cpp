#include<bits/stdc++.h>
using namespace std;

vector<int> ans(75, 0);

void p(int n){
    for(int i = 0;i < n;i++){
        int c = 0;
        for(int j = 0;j < 75;j++){
            ans[j] = ans[j] * 4 + c;
            c = ans[j] / 10;
            ans[j] %= 10;
        }
    }
}

void d(int n){
    int c = 0;
    for(int i = 74;i >= 0;i--){
        ans[i] += c * 10;
        c = ans[i] % n;
        ans[i] = ans[i] / n;
    }
}

int main(){

    long long n;
    while(cin >> n){
        fill(ans.begin(), ans.end(), 0);
        ans[0] = 1;
        p(n);
        ans[0]--;
        d(3);
        bool f = true;
        for(int i = 74;i >= 0;i--){
            if(ans[i] == 0 && f) continue;
            f = false;
            cout << ans[i];
        }
        cout << "\n";
    }

    return 0;

}