//問題:https://atcoder.jp/contests/arc110/tasks/arc110_a
//提出:https://atcoder.jp/contests/arc110/submissions/18574471
//2020-12-05AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){return b ? gcd(b,a%b):a;}

int main(){
  ll n;
  cin >> n;
  ll ans = 2;
  for(ll i=3; i<=n; ++i){
    ans *= i /gcd(ans,i);
  }
  cout << ans+1 << endl;
}