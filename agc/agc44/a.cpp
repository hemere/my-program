//問題:https://atcoder.jp/contests/agc044/tasks/agc044_a
//提出:https://atcoder.jp/contests/agc044/submissions/15267848
//2020-07-16AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1001001001001001001;

ll f(map<ll,ll> &mp,ll n, ll &a, ll &b, ll &c, ll &d){
  if(n == 0) return 0;
  if(n == 1) return d;
  if(mp[n] != 0) return mp[n];
  ll ans = INF;
  vector<int> v = {2,3,5};
  for(int i=0; i<3; ++i){
    ll l = n/v[i];
    ll r = n/v[i]+1;
    if(n < 2001001001) ans = min(ans, n*d); 
    ans = min(ans, f(mp,l,a,b,c,d) +(n -l*v[i]) *d +((v[i]==2)?a:(v[i]==3)?b:c));
    if(r == n) continue;
    ans = min(ans, f(mp,r,a,b,c,d) +(r*v[i] -n) *d +((v[i]==2)?a:(v[i]==3)?b:c));
  }
  //if(n<100) cout << "n:" << n << " ans:" << ans << endl;
  return mp[n] = ans;
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i){
    ll n;
    ll a, b, c, d;
    cin >> n >> a >> b >> c >> d;
    map<ll,ll> mp;
    ll ans = f(mp, n, a, b, c, d);
    cout << ans << endl;
  }
}