//問題:https://atcoder.jp/contests/agc039/tasks/agc039_a
//提出:https://atcoder.jp/contests/agc039/submissions/15554714
//2020-07-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string s;
  int k;
  cin >> s >> k;
  int n = s.size();
  bool same = true;
  for(int i=0; i<n-1; ++i){
    if(s[i] != s[i+1]){
      same = false;
      break;
    }
  }
  if(same){
    cout << (ll)n*k/2 << endl;
    return 0;
  }
  int cnt = 1;
  for(int i=0; i<n; ++i){
    if(s[i] == s[i+1]) ++cnt;
    else break;
  }
  ll ans = 0;
  for(int i=0; i<n-1; ++i){
    if(s[i] == s[i+1]){
      ans += k;
      s[i+1] = '.';
    }
  }
  if(s[0] == s[n-1] && cnt%2 == 1){
    ans += k-1;
  }
  cout << ans << endl;
}