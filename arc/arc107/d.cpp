//問題:https://atcoder.jp/contests/arc107/tasks/arc107_d
//提出:https://atcoder.jp/contests/arc107/submissions/17762595
//2020-10-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int d[3005][3005];

int f(int n, int k){
  if(d[n][k] != 0) return d[n][k];
  if(k == 0) return 0;
  if(n == k) return 1;
  int ans = f(n-1, k-1);
  if(n >= k*2) ans += f(n, k*2);
  if(ans >= MOD) ans -= MOD;
  return d[n][k] = ans;
}


int main(){
  int n, k;
  cin >> n >> k;
  cout << f(n, k) << endl;
}