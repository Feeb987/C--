#include<bits/stdc++.h>
using namespace std;

int main(){

    int n, t, ans = 0;
    cin >> n >> t;
    vector<int> arr(n);
    for(int i = 0;i < n;i++){
        cin >> arr[i];
    }
    bool c = true;
    while(c){
        c = false;
        int i = 0, nm = INT_MAX;
        for(int l = 0;l < n;l++){
            if(nm > arr[l] && t >= arr[l] && arr[l] > 0){
                c = true;
                i = l;
                nm = arr[i];
            }
        }
        // cout << endl;
        if(!c) break;
        int ni = i;
        for(int l = ni+1;l < n;l++) {
            if(arr[l] && arr[l] != 0) {
                ni = l;
                break;
            }
        }
        if(ni < n && ni != i) arr[ni] += arr[i];
        ans += arr[i];
        arr[i] = 0;
    }
    cout << ans;

    return 0;

}