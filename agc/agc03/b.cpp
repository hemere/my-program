//問題:https://atcoder.jp/contests/agc003/tasks/agc003_b
//提出:https://atcoder.jp/contests/agc003/submissions/15281349
//2020-07-17AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  ll ans = 0, cnt = 0;
  for(int i=0; i<n; ++i){
    int x;
    cin >> x;
    if(x == 0){
      ans += cnt/2;
      cnt = 0;
    }
    else cnt += x;
  }
  ans += cnt/2;
  cout << ans << endl;
}