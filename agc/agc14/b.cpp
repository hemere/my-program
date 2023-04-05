//問題:https://atcoder.jp/contests/agc014/tasks/agc014_b
//提出:https://atcoder.jp/contests/agc014/submissions/15133897
//2020-07-11AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  vector<int> ans(n);
  for(int i=0; i<m; ++i){
    int a, b;
    cin >> a >> b;
    --a; --b;
    ++ans[a];
    ++ans[b];
  }
  for(int i=0; i<n; ++i){
    if(ans[i]%2){
      cout << "NO" << endl;
      return 0;
    }
  }
  cout << "YES" << endl;
  return 0;
}