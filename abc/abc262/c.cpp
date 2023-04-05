//問題:https://atcoder.jp/contests/abc262/tasks/abc262_c
//提出:https://atcoder.jp/contests/abc262/submissions/33668098
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> an(n);
  for(int i=0; i<n; ++i){cin >> an[i]; an[i]--;}
  int cnt = 0;
  ll ans = 0;
  for(int i=0; i<n; ++i){
    if(an[i] == i) ++cnt;
    else if(an[i] > i && an[an[i]] == i) ++ans;
  }
  ans += (ll)cnt *(cnt-1) /2;
  cout << ans << endl;
}