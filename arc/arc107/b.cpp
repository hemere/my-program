//問題:https://atcoder.jp/contests/arc107/tasks/arc107_b
//提出:https://atcoder.jp/contests/arc107/submissions/17753702
//2020-10-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n, k;
  cin >> n >> k;
  ll ans = 0;
  for(int i=2; i<=2*n; ++i){
    int ab = min(i-1, 2*n -i +1);
    int cd = min(i-1-k, 2*n -(i-k) +1);
    if(cd < 0) continue;
    ans += (ll)ab * cd;
    //cout << i << ":" << ab << " " << cd << endl;
  }
  cout << ans << endl;
}