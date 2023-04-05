//問題:https://atcoder.jp/contests/abc294/tasks/abc294_e
//提出:https://atcoder.jp/contests/abc294/submissions/39867836
//2023-03-19AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
    ll l;
    int n1, n2;
    cin >> l >> n1 >> n2;
    vector<ll> v1(n1), l1(n1);
    vector<ll> v2(n2), l2(n2);
    for(int i=0; i<n1; ++i) cin >> v1[i] >> l1[i];
    for(int i=0; i<n2; ++i) cin >> v2[i] >> l2[i];
    int na1 = 0, na2 = 0;
    ll ans = 0;
    while(na1 < n1 && na2 < n2){
        ll cnt = min(l1[na1],l2[na2]);
        if(v1[na1] == v2[na2]) ans += cnt;
        l1[na1] -= cnt;
        l2[na2] -= cnt;
        if(l1[na1] == 0) ++na1;
        if(l2[na2] == 0) ++na2;
    }
    cout << ans << endl;
}