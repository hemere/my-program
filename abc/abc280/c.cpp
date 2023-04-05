//問題:https://atcoder.jp/contests/abc280/tasks/abc280_c
//提出:https://atcoder.jp/contests/abc280/submissions/36963274
//2022-12-03AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    string s, t;
    cin >> s >> t;
    int ans = t.size();
    for(int i=0; i<(int)s.size(); ++i){
        if(s[i] != t[i]){
            ans = i+1;
            break;
        }
    }
    cout << ans << endl;
}