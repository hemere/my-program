//問題:https://atcoder.jp/contests/arc108/tasks/arc108_a
//提出:https://atcoder.jp/contests/arc108/submissions/18257777
//2020-11-21AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll s, p;
  cin >> s >> p;
  for(ll i=1; i*i<=p; ++i){
    if(p%i != 0) continue;
    if(p/i + i == s){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}