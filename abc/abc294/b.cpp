//問題:https://atcoder.jp/contests/abc294/tasks/abc294_b
//提出:https://atcoder.jp/contests/abc294/submissions/39850509
//2023-03-19AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int h, w;
    cin >> h >> w;
    vector<vector<char>> ans(h,vector<char>(w));
    for(int i=0; i<h; ++i) for(int j=0; j<w; ++j){
        int ai;
        cin >> ai;
        if(ai == 0) ans[i][j] = '.';
        else ans[i][j] = (char)('A'+ai -1);
    }
    for(int i=0; i<h; ++i){
        for(int j=0; j<w; ++j){
            cout << ans[i][j];
        }
        cout << endl;
    }
}