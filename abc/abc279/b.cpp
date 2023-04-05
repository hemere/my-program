//問題:https://atcoder.jp/contests/abc279/tasks/abc279_b
//提出:https://atcoder.jp/contests/abc279/submissions/36804035
//22022-11-26AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s, t;
  cin >> s >> t;
  if(s.size() >= t.size()) for(int i=0; i<(int)s.size()-t.size()+1; ++i){
    bool ok = true;
    for(int j=0; j<(int)t.size(); ++j){
      if(s[i+j] != t[j]){
        ok = false;
      }
    }
    if(ok){
      cout << "Yes" << endl;
      return 0;
    }
  }
  cout << "No" << endl;
  return 0;
}