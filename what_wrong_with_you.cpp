/*
***************
*整理一些奇怪語法*
***************
*/
#include<bits/stdc++.h>
#define IF(x) if((x)){
using namespace std;

int main(){

    int a = -1;
    if(!~a) cout << "可以用來判斷是否有找到值的簡化寫法\n";

    (!~a)&&(cout << "會比上面的更加簡短更難讀\n", true);//判斷式成立時才會執行
    (!~a)||(cout << "會比上面的更加簡短更難讀\n", true);//不成立時執行

    cout << "abc"[0] << 3["abcdef"] << endl;

    auto f = [](int a){
        return a*a;
    };
    cout << f(3) << endl;//不需額外寫一個函式

    auto d = [&](auto self, int a, int b){
        if(a+b>100) return;
        cout << a+b << " ";
        self(self, b, a+b);
    };
    d(d, 1, 1);//還可以做遞迴

    [](){
        cout << endl;
    }();//其實也不需要變數儲存就可以直接執行


    int arr[] = {1, 2, 3, 4, 5};
    int *p = arr;
    cout << *(p+3) << endl;//就指標操作

    int i = 10, l = 10;
    while (i-->0) cout << i << " ";//看起來蠻炫砲的
    cout << endl;
    while (0<--l) cout << l << " ";//其實只要把判斷元跟--分開就現出原形了
    cout << endl;
    
    for(cout << "你甚至可以這樣";i < 10;cout << i << " ") i++;//但這樣寫是有什麼毛病?
    cout << endl;
    
    i-=-1;//阿不就是i++
    cout << i << endl;

    int fi = 0, s = 1;
    cout << (fi>s? 1:2) << endl;//其實這算好理解的了

    int x = (1,2,3);
    cout << x << endl;//會取到最後一個值
    
    int arr2<:3:> = <% 1, 2, 3 %>;
    cout << arr2<:1:> << endl;//就陣列的變形

    IF(10>3) cout << "只能說超噁心\n";}

    return 0;
    
}