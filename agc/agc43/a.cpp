//問題:https://atcoder.jp/contests/agc043/tasks/agc043_a
//提出:https://atcoder.jp/contests/agc043/submissions/11050392
//2020-03-21AC
#include <bits/stdc++.h>
using namespace std;
const int INF=300;

int main(){
  int h, w;
  cin >> h >> w;
  char hwmp[h][w];
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      cin >> hwmp[i][j];
    }
  }
  vector<vector<int>> dp(h,vector<int>(w,INF));
  if(hwmp[0][0]=='.') dp[0][0] =0;
  else dp[0][0]=1;
  for(int i=0; i<h; ++i){
    for(int j=0; j<w; ++j){
      char x=hwmp[i][j], dx=hwmp[i][j-1], dy=hwmp[i-1][j];
      if(j){
        if(x=='.') dp[i][j] = min(dp[i][j], dp[i][j-1]);
        if(x==dx) dp[i][j] = min(dp[i][j], dp[i][j-1]);
        else dp[i][j] = min(dp[i][j], dp[i][j-1]+1);
      }
      if(i){
        if(x=='.') dp[i][j] = min(dp[i][j], dp[i-1][j]);
        if(x==dy) dp[i][j] = min(dp[i][j], dp[i-1][j]);
        else dp[i][j] = min(dp[i][j], dp[i-1][j]+1);
      }
    }
  }
  cout << dp.at(h-1).at(w-1) << endl;
}