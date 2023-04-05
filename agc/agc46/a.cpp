//問題:https://atcoder.jp/contests/agc046/tasks/agc046_a
//提出:https://atcoder.jp/contests/agc046/submissions/14495801
//2020-06-20AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int x;
  cin >> x;
  int i = 0, ans = 0;
  while(1){
    i += x;
    i %= 360;
    ++ans;
    if(i == 0) break;
  }
  cout << ans << endl;
}