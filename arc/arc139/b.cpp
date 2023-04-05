//問題:https://atcoder.jp/contests/arc139/tasks/arc139_b
//提出:https://atcoder.jp/contests/arc139/submissions/31241616
//2022-04-24AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const ll INF = 1001001001001001001;

ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}

void solve(){
  ll n, a, b, oct, act, bct;
  cin >> n >> a >> b >> oct >> act >> bct;
  if(a > b){
    swap(a,b);
    swap(act,bct);
  }
  ll kotei = 0;
  ll lcm = (ll)a*b/gcd(a,b);
  //cout << "LCM:" << lcm << endl;
  if(2*lcm < n){
    ll lct = min(lcm*oct, min(lcm/a*act, lcm/b*bct));
    ll cnt = n/lcm -2;
    //cout << lct << " " << cnt << endl;
    kotei += cnt *lct;
    n -= lcm *cnt;
  }
  //cout << "固定費:" << kotei  << " n残り:" << n << endl;
  ll ans = INF;
  for(int i=0; i<=n/b; ++i){
    ll nans;
    if(a*oct <= act){
      nans = i*bct + (n-i*b)*oct;
    }else{
      ll cnt = (n-i*b)/a;
      //cout << "Acount:" << cnt << endl;
      nans = i*bct + cnt*act +(n-i*b-cnt*a)*oct;
    }
    //cout << "Bcount:" << i << " anscount:" << nans << endl;
    ans = min(ans, kotei+nans);
  }
  cout << ans << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) solve();
}