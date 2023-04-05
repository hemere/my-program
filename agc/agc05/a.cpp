//問題:https://atcoder.jp/contests/agc005/tasks/agc005_a
//提出:https://atcoder.jp/contests/agc005/submissions/15265511
//2020-07-16AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int ans = 0, cnt = 0;
  for(int i=0; i<n; ++i){
    if(s[i] == 'T'){
      if(cnt) --cnt;
      else ans += 2;
    }else{
      ++cnt;
    }
  }
  cout << ans << endl;
}