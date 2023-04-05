//問題:https://atcoder.jp/contests/arc138/tasks/arc138_a
//提出:https://atcoder.jp/contests/arc138/submissions/30809383
//2022-04-09AC
#include <bits/stdc++.h>
using namespace std;
const int INF = 1001001001;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> an(n);
  for(int i=0; i<n; ++i) cin >> an[i];
  vector<int> la(n-k);
  la[0] = an[k];
  for(int i=1; i<n-k; ++i) la[i] = max(la[i-1],an[k+i]);
  int ans = INF;
  for(int i=0; i<k; ++i){
    auto it = upper_bound(la.begin(),la.end(),an[i]);
    if (it == la.end()) continue;
    //cout << i << " " << distance(la.begin(),it) << endl;
    ans = min(ans, (int)(k-i+ distance(la.begin(),it)));
  }
  if(ans == INF) cout << -1 << endl;
  else cout << ans << endl;
}