//問題:https://atcoder.jp/contests/tessoku-book/tasks/tessoku_book_c
//提出:https://atcoder.jp/contests/tessoku-book/submissions/37090338
//2022-12-08AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, k;
    cin >> n >> k;
    vector<int> a(n), b(n);
    for(int i=0; i<n; ++i) cin >> a[i];
    for(int i=0; i<n; ++i) cin >> b[i];
    sort(b.begin(),b.end());
    string ans = "No";
    for(int i=0; i<n; ++i){
        auto it = lower_bound(b.begin(),b.end(),k-a[i]);
        if(*it == k-a[i]) ans = "Yes";
    }
    cout << ans << endl;
}