//問題:https://atcoder.jp/contests/abc254/tasks/abc254_e
//提出:https://atcoder.jp/contests/abc254/submissions/32232650
//2022-06-04AC
#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
  int n, m;
  cin >> n >> m;
  vector<vector<int>> v(n, vector<int>(0));
  for(int i=0; i<m; ++i){
    int ai, bi;
    cin >> ai >> bi;
    --ai; --bi;
    v[ai].push_back(bi);
    v[bi].push_back(ai);
  }
  vector<vector<int>> ans(n, vector<int>(4,0));
  for(int i=0; i<n; ++i){
    queue<P> que;
    que.push(P(0,i));
    vector<bool> ok(n,true);
    //cout << i << ":" << endl;
    while(!que.empty()){
      int nc, ni;
      tie(nc, ni) = que.front();
      que.pop();
      if(!ok[ni]) continue;
      ok[ni] = false;
      //cout << nc << "-" << ni+1 << endl;
      ans[i][nc] += ni+1;
      if(nc != 3) for(int nx:v[ni]){
        if(!ok[nx]) continue;
        que.push(P(nc+1,nx));
      }
    }
  }
  /*
  for(int i=0; i<n; ++i) for(int j=0; j<4; ++j){
    if(j != 3) cout << ans[i][j] << " ";
    else cout << ans[i][j] << endl;
  }
  */
  int q;
  cin >> q;
  for(int i=0; i<q; ++i){
    int xi, ki;
    cin >> xi >> ki;
    --xi;
    int num = 0;
    for(int j=0; j<=ki; ++j) num += ans[xi][j];
    cout << num << endl;
  }
}