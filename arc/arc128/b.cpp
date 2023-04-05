//問題:https://atcoder.jp/contests/arc128/tasks/arc128_b
//提出:https://atcoder.jp/contests/arc128/submissions/31776939
//2022-05-18AC
#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

void solve(){
  int r, g, b;
  cin >> r >> g >> b;
  int ans = INF;
  if(r%3 == g%3){
    ans = min(ans, max(r,g));
  }
  if(r%3 == b%3){
    ans = min(ans, max(r,b));
  }
  if(g%3 == b%3){
    ans = min(ans, max(g,b));
  }
  if(ans == INF) cout << -1 << endl;
  else cout << ans << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) solve();
}