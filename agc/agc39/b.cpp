//問題:https://atcoder.jp/contests/agc039/tasks/agc039_b
//提出:https://atcoder.jp/contests/agc039/submissions/15559734
//2020-08-11
#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; ++i) cin >> s[i];
  vector<int> oz(n, -1);
  oz[0] = 0;
  queue<int> que;
  que.push(0);
  while(!que.empty()){
    int x = que.front();
    que.pop();
    for(int i=0; i<n; ++i){
      if(s[x][i] == '0') continue;
      if(oz[i] == -1){
        oz[i] = (oz[x] ? 0:1);
        que.push(i);
      }
      else if(oz[i] == oz[x]){
        cout << -1 << endl;
        return 0;
      }
    }
  }
  vector<vector<int>> wf(n,vector<int>(n,INF));
  for(int i=0; i<n; ++i) for(int j=0; j<n; ++j){
    if(i == j) wf[i][j] = 0;
    else if(s[i][j] == '1') wf[i][j] = 1;
  }
  for(int k=0; k<n; ++k) for(int i=0; i<n; ++i) for(int j=0; j<n; ++j){
    wf[i][j] = min(wf[i][j], wf[i][k] + wf[k][j]);
  }
  int ans = 0;
  for(int i=0; i<n; ++i) for(int j=0; j<n; ++j){
    ans = max(ans,wf[i][j]);
  }
  cout << ans+1 << endl;
}