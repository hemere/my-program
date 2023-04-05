//問題:https://atcoder.jp/contests/abc282/tasks/abc282_c
//提出:https://atcoder.jp/contests/abc282/submissions/37334281
//2022-12-17AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    string s;
    cin >> n >> s;
    bool ot = true;
    for(int i=0; i<n; ++i){
        if(s[i] == ',' && ot) s[i] = '.';
        else if(s[i] == '"' && ot) ot = false;
        else if(s[i] == '"' && !ot) ot = true;
    }
    cout << s << endl;
}