//問題:https://atcoder.jp/contests/arc110/tasks/arc110_b
//提出:https://atcoder.jp/contests/arc110/submissions/18577424
//2020-12-05AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  ll ans = 10000000000;
  int n;
  string s;
  cin >> n >> s;
  if(s.size() == 1 && s[0] == '1'){
    cout << 20000000000 << endl;
    return 0;
  }
  if(s.size() == 1 && s[0] == '0'){
    cout << 10000000000 << endl;
    return 0;
  }
  int frag;
  if(s[0] == '1' && s[1] == '1') frag = 0;
  if(s[0] == '1' && s[1] == '0') frag = 1;
  if(s[0] == '0' && s[1] == '1'){frag = 2; --ans;}
  if(s[0] == '0' && s[1] == '0') frag = 3;
  for(int i=2; i<n; ++i){
    if(frag == 0){
      if(s[i] == '0') frag = 1;
      else frag = 3;
    }else if(frag == 1){
      if(s[i] == '1'){frag = 2; --ans;}
      else frag = 3;
    }else if(frag == 2){
      if(s[i] == '1') frag = 0;
      else frag = 3;
    }
  }
  if(frag == 3) cout << 0 << endl;
  else cout << ans << endl;
}