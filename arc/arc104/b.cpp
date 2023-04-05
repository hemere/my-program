//問題:https://atcoder.jp/contests/arc104/tasks/arc104_b
//提出:https://atcoder.jp/contests/arc104/submissions/17163944
//2020-10-03AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  vector<vector<int>> v(n+1, vector<int>(4,0));
  for(int i=1; i<n+1; ++i){
    if(s[i-1] == 'A')++v[i][0];
    else if(s[i-1] == 'G')++v[i][1];
    else if(s[i-1] == 'C')++v[i][2];
    else if(s[i-1] == 'T')++v[i][3];
    for(int j=0; j<4; ++j) v[i][j] += v[i-1][j];
  }
  int ans = 0;
  for(int i=0; i<n; ++i) for(int j=i+1; j<n+1; ++j){
    if(v[j][0] -v[i][0] == v[j][3] -v[i][3] && 
       v[j][1] -v[i][1] == v[j][2] -v[i][2]){
      ++ans;
    }
  }
  cout << ans << endl;
}