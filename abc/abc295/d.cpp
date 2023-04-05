//問題:https://atcoder.jp/contests/abc295/tasks/abc295_d
//提出:https://atcoder.jp/contests/abc295/submissions/40043529
//2023-03-25AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    string s;
    cin >> s;
    vector<int> cnt(1<<11,0);
    int nc = 0;
    ll ans = 0;
    cnt[0]++;
    for(int i=0; i<(int)s.size(); ++i){
        int nn = 1 << (int)(s[i] - '0');
        nc = (nc^nn);
        ans += cnt[nc];
        cnt[nc]++;
    }
    cout << ans << endl;
}