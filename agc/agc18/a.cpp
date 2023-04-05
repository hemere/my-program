//問題:https://atcoder.jp/contests/agc018/tasks/agc018_a
//提出:https://atcoder.jp/contests/agc018/submissions/15094743
//2020-07-09AC
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){return b? gcd(b,a%b):a;}

int main(){
  int n, k, a;
  cin >> n >> k >> a;
  bool ansis = (a >= k);
  for(int i=1; i<n; ++i){
    int x;
    cin >> x;
    a = gcd(a, x);
    if(x >= k) ansis = true;
  }
  cout << ((ansis && k%a == 0)? "POSSIBLE":"IMPOSSIBLE") << endl;
}