//問題:https://atcoder.jp/contests/abc254/tasks/abc254_b
//提出:https://atcoder.jp/contests/abc254/submissions/32209487
//2022-06-04AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> ans(n,vector<int>(0));
  ans[0].push_back(1);
  for(int i=1; i<n; ++i){
    int num = ans[i-1].size();
    for(int j=0; j<=num; ++j){
      if(j == 0) ans[i].push_back(1);
      else if(j == num) ans[i].push_back(1);
      else ans[i].push_back(ans[i-1][j-1]+ans[i-1][j]);
    }
  }
  for(int i=0; i<n; ++i){
    int num = ans[i].size();
    for(int j=0; j<num; ++j){
      if(j != num-1) cout << ans[i][j] << " ";
      else cout << ans[i][j] << endl;
    }
  }
}