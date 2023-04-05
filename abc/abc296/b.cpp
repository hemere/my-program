//問題:https://atcoder.jp/contests/abc296/tasks/abc296_b
//提出:https://atcoder.jp/contests/abc296/submissions/40217283
//2023-04-01AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    vector<string> s8(8);
    for(int i=0; i<8; ++i) cin >> s8[i];
    for(int i=0; i<8; ++i) for(int j=0; j<8; ++j){
        if(s8[i][j] == '*') cout << (char)('a'+j) << 8-i << endl;
    }
}