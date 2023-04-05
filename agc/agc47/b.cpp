//問題:https://atcoder.jp/contests/agc047/tasks/agc047_b
//提出:https://atcoder.jp/contests/agc047/submissions/15789539
//WA
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<string> sn(n);
  for(int i=0; i<n; ++i){
    cin >> sn[i];
    reverse(sn[i].begin(),sn[i].end());
  }
  sort(sn.begin(),sn.end());
  ll ans = 0;
  for(int i=0; i<n; ++i){
    int ni = sn[i].size();
    if(ni == 1){
      for(int j=0; j<n; ++j){
        if(i == j) continue;
        for(int k=0; k<(int)sn[j].size(); ++k){
          if(sn[i][0] == sn[j][k]){
            ++ans;
            break;
          }
        }
      }
      continue;
    }
    string subs = sn[i].substr(0,ni-1);
    int j=i+1;
    while(j<n && sn[j].size() > ni && subs == sn[j].substr(0,ni-1)){
      for(int k=ni-1; k<(int)sn[j].size(); ++k){
        if(sn[i][ni-1] == sn[j][k]){
          ++ans;
          break;
        }
      }
      ++j;
    }
  }
  cout << ans << endl;
}