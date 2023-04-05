//問題:https://atcoder.jp/contests/abc260/tasks/abc260_a
//提出:https://atcoder.jp/contests/abc260/submissions/33654042
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  if(s[0] == s[1] && s[1] == s[2]) cout << -1 << endl;
  else if(s[0] == s[1]) cout << s[2] << endl;
  else if(s[0] == s[2]) cout << s[1] << endl;
  else cout << s[0] << endl;
}