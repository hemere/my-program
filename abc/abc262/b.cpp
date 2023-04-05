//問題:https://atcoder.jp/contests/abc262/tasks/abc262_b
//提出:https://atcoder.jp/contests/abc262/submissions/33663547
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<bool>> v(n,vector<bool>(n,false));
  for(int i=0; i<m; ++i){
    int ui, vi;
    cin >> ui >> vi;
    --ui; --vi;
    v[ui][vi] = true;
    v[vi][ui] = true;
  }
  int ans = 0;
  for(int i=0; i<n-2; ++i) for(int j=i+1; j<n-1; ++j) for(int k=j+1; k<n; ++k){
    if(v[i][j] && v[j][k] && v[k][i]) ++ans;
  }
  cout << ans << endl;
}