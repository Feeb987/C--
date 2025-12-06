#include<bits/stdc++.h>
#define int long long
using namespace std;

struct Tree{
    int b, s;
}tree[1000000];

signed main(){

    //init
    int n, root, sum_parent = 0, sum_children = 0;
    cin >> n;
    while(n--){
        int num, b, s;
        Tree node;
        cin >> num >> b >> s;
        sum_parent += num;
        sum_children += b + s;
        if(b < s) swap(b, s);
        node.b = b, node.s = s;
        tree[num] = node;
    }
    //find root
    root = sum_parent - sum_children;
    //bfs&output
    queue<int> bfs;
    bfs.push(root);
    while (!bfs.empty()) {
        int node = bfs.front(), b = tree[node].b, s = tree[node].s;
        bfs.pop();
        if(b>0) bfs.push(b);
        if(s>0) bfs.push(s);
        cout << node << " " << b << " " << s << endl;
    }
    
    return 0;
    
}