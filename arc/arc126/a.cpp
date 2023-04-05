//問題:https://atcoder.jp/contests/arc126/tasks/arc126_a
//提出:https://atcoder.jp/contests/arc126/submissions/26038147
//2021-09-22AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n2, n3, n4;
  cin >> n2 >> n3 >> n4;
  ll n6 = n3/2;
  ll n64 = min(n6,n4);
  n6 -= n64;
  n4 -= n64;
  ll n622 = min(n6,n2/2);
  n2 -= n622 * 2;
  ll n442 = min(n4/2,n2);
  n4 -= n442*2;
  n2 -= n442;
  ll n4222 = min(n4,n2*3);
  n2 -= n4222 * 3;
  ll n22222 = n2/5;
  cout << n64 + n622 + n442 + n4222 + n22222 << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) solve();
}