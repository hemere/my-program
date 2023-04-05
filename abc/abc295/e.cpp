//https://atcoder.jp/contests/abc295/tasks/abc295_e
//NoSub
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

ll pd[2005];
ll rd[2005];
ll Ep(int x, int y){
  if(y == 0) return 1;
  if(y == 1) return x;
  ll r = Ep(x,y/2);
  if(y%2 == 1) return r *r%MOD *x%MOD;
  else return r *r%MOD;
}
ll Ftl(ll x){
  if(x == 1 || x == 0) return 1;
  if(pd[x] != 0) return pd[x];
  return pd[x] = Ftl(x-1) *x%MOD;
}
ll invFtl(ll x){
  if(x == 1 || x == 0) return 1;
  if(rd[x] != 0) return rd[x];
  return rd[x] = invFtl(x-1)*Ep(x,MOD-2)%MOD;
}
ll comb(ll m, ll n){
  if(m < n) return 0;
  return Ftl(m) *invFtl(n)%MOD *invFtl(m-n)%MOD;
}


int main(){
    int n, m, k;
    cin >> n >> m >> k;
    vector<int> an(0);
    int zcnt = 0;
    for(int i=0; i<n; ++i){
        int ai;
        cin >> ai;
        if (ai == 0) ++zcnt;
        else an.push_back(ai);
    }
    sort(an.begin(),an.end());
    ll ans = 0;
    for(int i=1; i<=m; ++i){
        auto it = lower_bound(an.begin(),an.end(),i);
        ll na = 1;
        for(int j=1; j<k-(it-an.begin()); ++j){
            na += Ep(i-1,j) * comb(zcnt,j) %MOD;
            na %= MOD;
        }
        auto it2 = upper_bound(an.begin(),an.end(),i);
        ll nb = 1;
        for(int j=1; j<(n-k-1)-(n-(it2-an.begin())); ++j){
            nb += Ep(m-i-1,j) * comb(zcnt,j) %MOD;
            nb %= MOD;
        }
        ans += na * nb %MOD;
    }
    ans *= Ep(m,MOD-1-zcnt);
    ans %= MOD;
    cout << ans << endl;
}