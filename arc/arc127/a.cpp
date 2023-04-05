//問題:https://atcoder.jp/contests/arc127/tasks/arc127_a
//提出:https://atcoder.jp/contests/arc127/submissions/26111334
//2021-09-26AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll f(ll n, bool flag){
  if(n == 0) return 0;
  else if(n < 10) return 1;
  ll x = n;
  int cnt = 0;
  while(x>=10){x/=10; ++cnt;}
  if(x != 1){
    ll keta = 1;
    for(int i=0; i<cnt; ++i) keta *= 10;
    return keta + f(keta-1, false) + (flag? f(keta-1, true):0);
  }else{
    for(int i=0; i<cnt; ++i) x *= 10;
    return n-x+1 + ((n-x >= x/10)? f(n-x, false):0) + (flag? f(x-1, true):0);
  }
}

int main(){
  ll n;
  cin >> n;
  cout << f(n, true) << endl;
}