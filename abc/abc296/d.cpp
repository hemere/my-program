//問題:https://atcoder.jp/contests/abc296/tasks/abc296_d
//提出:https://atcoder.jp/contests/abc296/submissions/40242483
//2023-04-01AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1001001001001001001;

int main(){
    ll n, m;
    cin >> n >> m;
    ll ans = INF;
    for(ll i=1; (i-1)*(i-1)<=m && i<=n; ++i){
        if(((m-1)/i +1) > n) continue;
        ans = min(ans,((m-1)/i+1)*i);
    }
    if(ans == INF) cout << -1 << endl;
    else cout << ans << endl;
}