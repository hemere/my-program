//問題:https://atcoder.jp/contests/agc016/tasks/agc016_a
//提出:https://atcoder.jp/contests/agc016/submissions/15116104
//2020-07-10AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;
  cin >> s;
  int n = s.size();
  int ans = 100;
  for(int i=0; i<26; ++i){
    int nans = 0, num = 0;
    for(int j=0; j<n; ++j){
      if(s[j] == 'a'+i){
        nans = max(nans, j-num);
        num = j+1;
      }
    }
    nans = max(nans, n-num);
    ans = min(ans, nans);
  }
  cout << ans << endl;
}