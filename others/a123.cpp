#include<bits/stdc++.h>
using namespace std;
vector<int> leaf;
int root_node;

struct Tree{
    int parents, h;
}tree[100000];

void dfs(int h, int index){
    tree[index].h = max(tree[index].h, h);
    if(index != root_node) dfs(h+1, tree[index].parents);
}

int main(){

    ios::sync_with_stdio(0);
    cin.tie(0);
    int node;
    cin >> node;
    set<int> root;
    for(int i = 1;i <= node;i++) root.insert(i);
    for(int i = 1;i <= node;i++){
        int child;
        cin >> child;
        tree[i].h = 0;
        vector<int> children;
        if(child == 0) leaf.push_back(i);
        for(int l = 0;l < child;l++){
            int index;
            cin >> index;
            tree[index].parents = i;
            root.erase(index);
        }
    }
    root_node = *root.begin();
    for(auto i : leaf) dfs(0, i);
    int h = 0;
    for(int i = 1;i <= node;i++) h += tree[i].h;
    cout << root_node << endl << h;

    return 0;
    
}