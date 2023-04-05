//問題:https://atcoder.jp/contests/arc109/tasks/arc109_b
//提出:https://atcoder.jp/contests/arc109/submissions/18458419
//2020-11-28AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll n;
  cin >> n;
  ll x = sqrt(2*n);
  while((x+1)*(x+2)/2 < n+1) ++x;
  while(x*(x+1)/2 > n+1) --x;
  cout << n-x+1 << endl;
}