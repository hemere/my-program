//問題:https://atcoder.jp/contests/agc047/tasks/agc047_a
//提出:https://atcoder.jp/contests/agc047/submissions/15782839
//2020-08-09AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

int main(){
  int n;
  cin >> n;
  vector<vector<int>> TandF(100,vector<int>(100,0));
  string s;
  for(int i=0; i<n; ++i){
    cin >> s;
    ll num = 0, keta = 0;
    bool frag = false;
    for(int j=0; j<(s.size()); ++j){
      if(s[j] == '.'){frag = true; continue;}
      if(frag) ++keta;
      num = num*10 + (s[j]-'0');
    }
    int two = 0, five = 0;
    while(num%2 == 0){
      num /= 2;
      ++two;
    }
    while(num%5 == 0){
      num /= 5;
      ++five;
    }
    if(25 +two -keta < 0)continue;
    if(25 +five -keta < 0)continue;
    ++TandF[25 +two -keta][25 +five -keta];
  }
  ll ans = 0;
  for(int i1=0; i1<51; ++i1) for(int i2=0; i2<51; ++i2){
    for(int j1=50-i1; j1<51; ++j1) for(int j2=50-i2; j2<51; ++j2){
      ans += (ll)TandF[i1][i2] * TandF[j1][j2];
      if(i1 == j1 && i2 == j2) ans -= TandF[i1][i2];
    }
  }
  ans /= 2;
  cout << ans << endl;
}