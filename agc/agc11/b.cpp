//問題:https://atcoder.jp/contests/agc011/tasks/agc011_b
//提出:https://atcoder.jp/contests/agc011/submissions/15196612
//2020-07-12
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<int> sra(n);
  for(int i=0; i<n; ++i) cin >> sra[i];
  sort(sra.begin(),sra.end());
  int ans = 1;
  ll rui = sra[0];
  for(int i=1; i<n; ++i){
    if(rui *2 >= sra[i]) ++ans;
    else ans = 1;
    rui += sra[i];
  }
  cout << ans << endl;
}