//問題:https://atcoder.jp/contests/abc280/tasks/abc280_a
//提出:https://atcoder.jp/contests/abc280/submissions/36954801
//2022-12-03AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    int cnt = 0;
    for(int i=0; i<h; ++i){
        string s;
        cin >> s;
        for(int j=0; j<w; ++j){
            if(s[j] == '#') ++cnt;
        }
    }
    cout << cnt << endl;
}