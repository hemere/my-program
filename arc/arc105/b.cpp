//問題:https://atcoder.jp/contests/arc105/tasks/arc105_b
//提出:https://atcoder.jp/contests/arc105/submissions/17340921
//2020-10-11AC
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b){ return a? gcd(b%a,a):b;}

int main(){
  int n;
  cin >> n;
  vector<int> an(n);
  for(int i=0; i<n; ++i) cin >> an[i];
  int ans = an[0];
  for(int i=1; i<n; ++i) ans = gcd(ans,an[i]);
  cout << ans << endl;
}