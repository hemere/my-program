//問題:https://atcoder.jp/contests/arc141/tasks/arc141_b
//提出:https://atcoder.jp/contests/arc141/submissions/32091584
//2022-05-29AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

int main(){
  ll n, m;
  cin >> n >> m;
  if(n > 100){
    cout << 0 << endl;
    return 0;
  }
  vector<vector<ll>> dp(n,vector<ll>(61,0));
  for(int i=0; i<61; ++i){
    ll num = (ll)1 << i;
    if(m == 1){
      dp[0][0] = 1;
      break;
    }
    else if(num*2 <= m){
      dp[0][i] = num %MOD;
    }else{
      dp[0][i] = (m-dp[0][i-1]*2 +1)%MOD;
      break;
    }
  }
  for(int i=1; i<n; ++i){
    for(int j=0; j<61; ++j) for(int k=0; k<j; ++k){
      dp[i][j] += dp[i-1][k] *dp[0][j] %MOD;
      dp[i][j] %= MOD;
    }
  }
  /*
  for(int i=0; i<n; ++i){
    for(int j=0; j<5; ++j){
      cout << dp[i][j] << " ";
    }
    cout << endl;
  }
  */
  ll ans = 0;
  for(int i=0; i<61; ++i){
    ans += dp[n-1][i];
    ans %= MOD;
  }
  cout << ans << endl;
}