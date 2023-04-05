//問題:https://atcoder.jp/contests/abc282/tasks/abc282_a
//提出:https://atcoder.jp/contests/abc282/submissions/37324942
//2022-12-17AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int k;
    cin >> k;
    string ans;
    for(int i=0; i<k; ++i){
        ans += (char)('A'+i);
    }
    cout << ans << endl;
}