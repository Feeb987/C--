#include<bits/stdc++.h>
using namespace std;

int main(){

    int h1, h2, m1, m2, s1, s2;
    scanf("%d:%d:%d", &h1, &m1, &s1);
    scanf("%d:%d:%d", &h2, &m2, &s2);
    if(s1>s2){
        m2--;
        s2 = s2 + 60 - s1;
    }
    else s2 -= s1;
    if(m1>m2){
        h2--;
        m2 = m2 + 60 - m1;
    }
    else m2 -= m1;
    if(h1>h2){
        h2 = h2 + 24 - h1;
    }
    else h2 -= h1;
    printf("%02d:%02d:%02d", h2, m2, s2);

    return 0;

}