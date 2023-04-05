//問題:https://atcoder.jp/contests/arc139/tasks/arc139_a
//提出:https://atcoder.jp/contests/arc139/submissions/31237115
//2022-04-24
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  ll ans = 0;
  for(int i=0; i<n; ++i){
    int ti;
    cin >> ti;
    ++ans;
    bool plus = false;
    for(int j=0; j<ti; ++j){
      if(ans &1)plus = true;
      ans >>= 1;
    }
    if(!(ans&1)) ++ans;
    else if(plus) ans += 2;
    for(int j=0; j<ti; ++j) ans <<= 1;
  }
  cout << ans << endl;
}