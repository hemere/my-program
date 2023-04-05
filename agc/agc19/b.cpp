//問題:https://atcoder.jp/contests/agc019/tasks/agc019_b
//提出:https://atcoder.jp/contests/agc019/submissions/15241398
//2020-07-14AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  ll ans = 1;
  ans += (ll)n *(n-1) /2;
  map<char,int> mp;
  for(int i=0; i<n; ++i){
    ans -= mp[s[i]];
    ++mp[s[i]];
  }
  cout << ans << endl;
}