//問題:https://atcoder.jp/contests/abc295/tasks/abc295_b
//提出:https://atcoder.jp/contests/abc295/submissions/40038197
//2023-03-25AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int r, c;
    cin >> r >> c;
    vector<string> brc(r);
    for(int i=0; i<r; ++i) cin >> brc[i];
    for(int i=0; i<r; ++i) for(int j=0; j<c; ++j){
        if(brc[i][j] != '.' && brc[i][j] != '#'){
            int cnt = (int)(brc[i][j] - '0');
            for(int i2=max(0,i-cnt); i2<min(r,i+cnt+1); ++i2){
                for(int j2=max(0,j-cnt+abs(i-i2)); j2<min(c,j+cnt-abs(i-i2)+1); ++j2){
                    if(brc[i2][j2] == '#') brc[i2][j2] = '.';
                }
            }
            brc[i][j] = '.';
        }
    }
    for(int i=0; i<r; ++i){
        cout << brc[i] << endl;
    }
}