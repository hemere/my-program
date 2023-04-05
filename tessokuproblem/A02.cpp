//問題:https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_b
//提出:https://atcoder.jp/contests/tessoku-book/submissions/37090180
//2022-12-08AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, x;
    cin >> n >> x;
    string ans = "No";
    for(int i=0; i<n; ++i){
        int xi;
        cin >> xi;
        if(xi == x) ans = "Yes";
    }
    cout << ans << endl;
}