//問題:https://atcoder.jp/contests/abc280/tasks/abc280_e
//WA
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;
ll pd[100005];
ll rd[100005];
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
    int n, p;
    cin >> n >> p;
    ll ans = 0;
    for(int i=0; i*2+1<=n; ++i){
        int cnt = n-i;
        ans += cnt*Ep(p,i)%MOD*Ep(100-p,cnt-i)%MOD*Ep(100,MOD-1-cnt)%MOD*comb(cnt,i)%MOD;
        if(i*2+1 == n) ans += cnt*Ep(p,i+1)%MOD*Ep(100,MOD-1-(i+1))%MOD;
        ans %= MOD;
        cout << cnt << " " << Ep(p,i) << " " << Ep(100-p,cnt-i) << " " << Ep(100,MOD-1-cnt) << " " << comb(cnt,i) << endl;
    }
    cout << Ep(100,MOD-4) << " " << Ep(100,3) << " " << Ep(100,MOD-4)*Ep(100,3)%MOD << endl;
    cout << ans << endl;
}