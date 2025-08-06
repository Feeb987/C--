#include<bits/stdc++.h>
using namespace std;


bool fun(int y){
    if((y % 400  == 0) || (y % 4 == 0 && y % 100 != 0)) return true;
    return false;
}

int main(){
    
    vector<int> b;
    int y, m, d, time;
    cin >> time;
    for(int i = 0;i < time;i++){
        int t;
        cin >> t;
        b.push_back(t);
    }
    scanf("%d/%d/%d", &y, &m, &d);
    sort(b.begin(), b.end());
    int l = 1;
    for(auto it : b) l = l * (it/__gcd(l, it));
    while(l--){
        d++;
        if (((m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12) && d > 31) ||
            ((m == 4 || m == 6 || m == 9 || m == 11) && d > 30) ||
            (m == 2 && fun(y) && d > 29) ||
            (m == 2 && !fun(y) && d > 28)) {
            d = 1;
            m++;
        }
        if(m > 12){
            m = 1;
            y++;
        }
    }
    printf("%02d/%02d/%02d", y, m, d);

    return 0;

}