//問題:https://atcoder.jp/contests/arc134/tasks/arc134_a
//提出:https://atcoder.jp/contests/arc134/submissions/28859525
//2022-01-29AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  ll l, w;
  cin >> n >> l >> w;
  ll ans = 0, nn = 0;
  for(int i=0; i<n; ++i){
    ll ai;
    cin >> ai;
    if(ai > nn) ans += (ai - nn -1) /w +1;
    nn = ai + w;
  }
  if(l > nn) ans += (l - nn -1) /w +1;
  cout << ans << endl;
}