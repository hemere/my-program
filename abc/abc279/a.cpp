//問題:https://atcoder.jp/contests/abc279/tasks/abc279_a
//提出:https://atcoder.jp/contests/abc279/submissions/36794509
//22022-11-26AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int cnt = 0;
  for(int i=0; i<(int)s.size(); ++i){
    if(s[i] == 'v') ++cnt;
    else cnt += 2;
  }
  cout << cnt << endl;
}