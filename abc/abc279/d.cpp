//問題:https://atcoder.jp/contests/abc279/tasks/abc279_d
//提出:https://atcoder.jp/contests/abc279/submissions/36820363
//22022-11-26AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll a, b;
  cin >> a >> b;
  ll l=0, r=a/b;
  while(l+1<r){
    ll mid = (l+r)/2;
    if( 2*(mid+1)*sqrt(mid+1) < (double)a/b) l = mid;
    else r = mid;
  }
  double ans1 = l*b + a/sqrt(l+1);
  double ans2 = r*b + a/sqrt(r+1);
  printf("%.10f\n",min(ans1, ans2));
}