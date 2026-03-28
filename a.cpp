#include<bits/stdc++.h>
using namespace std;

int getAscii(string str){
    int num = 0;
    reverse(str.begin(), str.end());
    for(int i = 0;i < str.size();i++) num += (str[i]-'0') * pow(2, i);
    return num;
}

int main(){
    
    map<string, string> m = {
  {".-", "A"},
  {"-...", "B"},
  {"-.-.", "C"},
  {"-..", "D"},
  {".", "E"},
  {"..-.", "F"},
  {"--.", "G"},
  {"....", "H"},
  {"..", "I"},
  {".---", "J"},
  {"-.-", "K"},
  {".-..", "L"},
  {"--", "M"},
  {"-.", "N"},
  {"---", "O"},
  {".--.", "P"},
  {"--.-", "Q"},
  {".-.", "R"},
  {"...", "S"},
  {"-", "T"},
  {"..-", "U"},
  {"...-", "V"},
  {".--", "W"},
  {"-..-", "X"},
  {"-.--", "Y"},
  {"--..", "Z"},
  {".----", "1"},
  {"..---", "2"},
  {"...--", "3"},
  {"....-", "4"},
  {".....", "5"},
  {"-....", "6"},
  {"--...", "7"},
  {"---..", "8"},
  {"----.", "9"},
  {"-----", "0"}
};
    string s, s2, cur = "", sub = "";
    while(cin >> s && s != "t") s2 += char(getAscii(s));
    for(auto it:s2){
        if(it == ' ') {
            sub += m[cur];
            cur.clear();
        }
        else cur += it;
    }
    sub += m[cur];
    cout << sub << endl;
    for(int i = 0;i <= 26;i++){
        for(auto it:sub) {
            int c = it - 'A';
            c = (c+i)%26;
            cout << char(c+'A');
        }
        cout << endl;
    }

    return 0;
    
}
/*
1
1100001
*/