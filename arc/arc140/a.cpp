//問題:https://atcoder.jp/contests/arc140/tasks/arc140_a
//提出:https://atcoder.jp/contests/arc140/submissions/31717037
//2022-05-15AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  string s;
  cin >> n >> k >> s;
  int ans = n;
  for(int i=2; i<=n; ++i){
    if(n%i) continue;
    vector<vector<int>> alf(n/i,vector<int>(26,0));
    for(int j=0; j<n; ++j){
      alf[j%(n/i)][s[j] -'a']++;
    }
    int cnt = 0;
    for(int j=0; j<n/i; ++j){
      int maxnum = 0;
      for(int k=0; k<26; ++k){
        maxnum = max(maxnum, alf[j][k]);
      }
      //cout << j << "-" << maxnum << endl;
      cnt += i - maxnum;
    }
    //cout << i << ":" << cnt << endl;
    if(cnt <= k){
      ans = n/i;
    }
  }
  cout << ans << endl;
}