//問題:https://atcoder.jp/contests/abc254/tasks/abc254_d
//提出:https://atcoder.jp/contests/abc254/submissions/32224399
//2022-06-04AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  ll ans = 0;
  vector<bool> ok(n+1,true);
  for(int i=1; i<=n; ++i){
    if(!ok[i]) continue;
    ll cnt = 0;
    for(int j=1; i*j*j<=n; ++j){
      //cout << i*i*j*j << " ";
      ++cnt;
      ok[i*j*j] = false;
    }
    //cout << "GROUP" << endl;
    ans += cnt*cnt;
  }
  cout << ans << endl;
}