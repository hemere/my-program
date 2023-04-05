//問題:https://atcoder.jp/contests/agc023/tasks/agc023_a
//提出:https://atcoder.jp/contests/agc023/submissions/14413973
//2020-06-16
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, x;
  cin >> n;
  map<ll, int> mp;
  ll rui = 0;
  ll ans = 0;
  for(int i=0; i<n; ++i){
    cin >> x;
    rui += x;
    ans += mp[rui];
    ++mp[rui];
  }
  ans += mp[0];
  cout << ans << endl;
}