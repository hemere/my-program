//問題:https://atcoder.jp/contests/arc134/tasks/arc134_c
//提出:https://atcoder.jp/contests/arc134/submissions/28870263
//2022-01-29AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

vector<ll> pd(205);
ll Ep(int x, int y){
  if(y == 0) return 1;
  if(y == 1) return x;
  if(pd[x] != 0) return pd[x];
  ll r = Ep(x,y/2);
  if(y%2 == 1){
    if(y = MOD-2) return pd[x] = r *r%MOD *x%MOD;
    else return r *r%MOD *x%MOD;
  }
  else{
    if(y = MOD-2) return pd[x] = r *r%MOD;
    return r *r%MOD;
  }
}
ll comb(ll m, ll n){
  if(m < n) return 0;
  ll x = 1;
  for(int i=0; i<n; ++i){
    x *= m-i;
    x %= MOD;
    x *= Ep(n-i, MOD-2);
    x %= MOD;
  }
  return x;
}

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> an(n);
  int num = 0;
  for(int i=0; i<n; ++i){
    cin >> an[i];
    if(i == 0) an[i] -= k;
    if(i > 0) num += an[i];
    if(num > an[0]){
      cout << 0 << endl;
      return 0;
    }
  }
  an[0] -= num;
  ll ans = 1;
  for(int i=0; i<n; ++i){
    ans *= comb(an[i]+k-1,k-1);
    ans %= MOD;
  }
  cout << ans << endl;
}