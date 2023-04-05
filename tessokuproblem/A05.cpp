//問題:https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_e
//提出:https://atcoder.jp/contests/tessoku-book/submissions/37090490
//2022-12-08AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    int ans = 0;
    for(int i=1; i<=n; ++i) for(int j=1; j<=n; ++j){
        if(k-i-j > 0 && k-i-j <= n) ++ans;
    }
    cout << ans << endl;
}