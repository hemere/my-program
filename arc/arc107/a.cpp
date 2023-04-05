//問題:https://atcoder.jp/contests/arc107/tasks/arc107_a
//提出:https://atcoder.jp/contests/arc107/submissions/17750256
//2020-10-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int main(){
  ll a, b, c;
  cin >> a >> b >> c;
  a = a*(a+1) /2 %MOD;
  b = b*(b+1) /2 %MOD;
  c = c*(c+1) /2 %MOD;
  cout << a *b %MOD *c %MOD << endl;
}