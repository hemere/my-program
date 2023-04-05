//問題:https://atcoder.jp/contests/agc046/tasks/agc046_b
//提出:https://atcoder.jp/contests/agc046/submissions/14513968
//2020-06-21
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

ll dp[3005][3005][2];

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  for(int i=a; i<=c; ++i) for(int j=b; j<=d; ++j){
    if(i==a && j==b){
      dp[a][b][0] = 1;
      continue;
    }
    dp[i][j][1] = (dp[i-1][j][0] + dp[i-1][j][1]) * j;
    dp[i][j][1] %= MOD;
    dp[i][j][0] = dp[i][j-1][1] + dp[i][j-1][0] * i;
    dp[i][j][0] %= MOD;
  }
  /*cout << "0:" << endl;
  for(int i=a; i<=c; ++i) for(int j=b; j<=d; ++j){
    cout << dp[i][j][0] << " ";
    if(j == d) cout << endl;
  }
  cout << "1:" << endl;
  for(int i=a; i<=c; ++i) for(int j=b; j<=d; ++j){
    cout << dp[i][j][1] << " ";
    if(j == d) cout << endl;
  }*/
  ll ans = (dp[c][d][1]+dp[c][d][0])%MOD;
  cout << ans << endl;
}