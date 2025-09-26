#include<iostream>
using namespace std;
signed main(){
    string s;// 把輸入當自串處理
    cin >> s;
    int i = 0, size = s.size();
    for (i = 0; i<size/2; i++){ // 頭尾交換
        int d = s[i]; // 儲存第一個值
        s[i] = s[size-1-i]; // 用後面的取代前面的
        s[size-1-i] = d; // 因為s[i]被替代所以用d填補後面的
    }
    for (i = 0; i<size; i++){ // 這裡我分開寫轉換功能
        if (s[i] == '6') s[i] = '9';
        else if (s[i] == '9') s[i] = '6';
    }
    cout << s << "\n";
    return 0;
}