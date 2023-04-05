//問題:https://atcoder.jp/contests/abc279/tasks/abc279_e
//提出:https://atcoder.jp/contests/abc279/submissions/36827216
//22022-11-26AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> d(n);
  vector<int> num(n);
  for(int i=0; i<n; ++i) num[i] = i;
  for(int i=0; i<m; ++i){
    int ai;
    cin >> ai;
    --ai;
    if(num[ai] == 0) d[num[ai+1]].push_back(i);
    if(num[ai+1] == 0) d[num[ai]].push_back(i);
    swap(num[ai],num[ai+1]);
  }
  int pos_1;
  for(int i=0; i<n; ++i) if(num[i] == 0) pos_1 = i;
  vector<int> ans(m, pos_1);
  for(int i=0; i<n; ++i){
    for(int j=0; j<(int)d[num[i]].size(); ++j){
      ans[d[num[i]][j]] = i;
    }
  }
  //for(int i=0; i<n; ++i) cout << num[i] << " ";
  //cout << endl;
  for(int i=0; i<m; ++i){
    cout << ans[i]+1 << endl;
  }
}