//問題:https://atcoder.jp/contests/agc024/tasks/agc024_b
//提出:https://atcoder.jp/contests/agc024/submissions/15696820
//2020-08-05AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, pi;
  cin >> n;
  vector<int> pn(n);
  for(int i=0; i<n; ++i){
    cin >> pi;
    --pi;
    pn[pi] = i;
  }
  int ans = n -1, cnt = 1;
  for(int i=0; i<n-1; ++i){
    if(pn[i] < pn[i+1]) ++cnt;
    else cnt = 1;
    ans = min(ans, n-cnt);
  }
  cout << ans << endl;
}