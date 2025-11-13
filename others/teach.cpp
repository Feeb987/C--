#include<bits/stdc++.h>
using namespace std;

struct Node{
    int d;
    struct Node *next = nullptr;
};

int main(){

    Node *n = nullptr;
    for(int i = 0;i < 5;i++){
        Node *node = new Node;
        cin >> node->d;
        node->next = n;
        n = node;
    }

    return 0;
    
}