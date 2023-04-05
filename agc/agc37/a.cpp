//問題:https://atcoder.jp/contests/agc037/tasks/agc037_a
//提出:https://atcoder.jp/contests/agc037/submissions/15570022
//2020-08-01AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int ans = n;
  for(int i=0; i<n-1; ++i){
    if(s[i] == s[i+1]){
      --ans;
      i += 2;
    }
  }
  cout << ans << endl;
}