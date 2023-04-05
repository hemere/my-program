//問題:https://atcoder.jp/contests/arc141/tasks/arc141_a
//提出:https://atcoder.jp/contests/arc141/submissions/32087449
//2022-05-29AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve(){
  ll n;
  cin >> n;
  string sn = to_string(n);
  int sz = sn.size();
  ll ans = -1;
  for(int i=1; i<sz; ++i){
    if(sz%i != 0) continue;
    string ms = sn;
    for(int j=i; j<sz; ++j){
      ms[j] = ms[j-i];
    }
    if(sn >= ms){
      ans = max(ans, stoll(ms, nullptr, 10));
      //cout << i<< ":" << ms << endl;
    }else{
      for(int j=i-1; j<sz; j+=i){
        int num = j;
        while(ms[num] == '0'){
          ms[num] = '9';
          --num;
        }
        ms[num]--;
      }
      //cout << i << ":" << ms << endl;
      ans = max(ans, stoll(ms, nullptr, 10));
    }
  }
  int cnt = 0;
  while(n >= 10){n/=10; ++cnt;}
  ll nans = 1;
  while(cnt){nans *=10; --cnt;}
  ans = max(ans, nans-1);
  cout << ans << endl;
}

int main(){
  int t;
  cin >> t;
  for(int i=0; i<t; ++i) solve();
}