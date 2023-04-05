//問題:https://atcoder.jp/contests/agc057/tasks/agc057_a
//提出:https://atcoder.jp/contests/agc057/submissions/31777449
//2022-05-18AC
#include <bits/stdc++.h>
using namespace std;

void solve(){
  int l, r;
  cin >> l >> r;
  int topcnt = 0, nr = r;
  while(nr >= 10){
    nr /= 10;
    topcnt++;
  }
  int one = 1;
  while(topcnt){
    one *= 10;
    topcnt--;
  }
  //cout << l << ":" << r << ":" << one << endl;
  if(one <= l){
    cout << r-l+1 << endl;
  }else if(nr != 1){
    cout << r-one+1 << endl;
  }else{
    cout << min(r-r/10, min(one, r-l+1)) << endl;
  }
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) solve();
}