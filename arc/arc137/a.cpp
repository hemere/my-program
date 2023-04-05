//問題:https://atcoder.jp/contests/arc137/tasks/arc137_a
//提出:https://atcoder.jp/contests/arc137/submissions/30229778
//2022-03-19AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){return b? gcd(b,a%b):a;}

int main(){
  ll l,r;
  cin >> l >> r;
  for(int i=0; i<10000; ++i) for(int j=0; j<i+1; ++j){
    if(gcd(l+j,r-i+j) == 1){
      cout << r-l-i << endl;
      return 0;
    }
  }
}