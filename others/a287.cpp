#include<bits/stdc++.h>
using namespace std;

int main(){

    string txt, c, tem = "";
    while(getline(cin, c) && c != "0") txt += c + "\n";
    c = "";
    deque<string> deq;
    for(int i = 0;i < txt.length();i++){
        if(isupper(txt[i]) || islower(txt[i])) tem += txt[i];
        else if(txt[i] >= '0' && txt[i] <= '9'){
            int ind = txt[i] - '0';
            int l = i + 1;
            while (l < txt.length() && isdigit(txt[l])) {
                ind = ind * 10 + (txt[l] - '0');
                l++;
            }
            ind--;
            i = l - 1;
            c += deq[ind];
            tem = deq[ind];
            deq.erase(deq.begin() + ind);
            deq.push_front(tem);
            tem = "";
        }
        else{
            c += tem;
            c += txt[i];
            if(tem != "") deq.push_front(tem);
            tem = "";
        }
    }
    cout << c;

    return 0;

}