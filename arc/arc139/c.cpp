//問題:https://atcoder.jp/contests/arc139/tasks/arc139_c
//提出:https://atcoder.jp/contests/arc139/submissions/31246161
//2022-04-24AC
#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
  int n, m;
  cin >> n >> m;
  bool sp = false;
  if(n < m){
    sp = true;
    swap(n,m);
  }
  vector<P> ans(0);
  for(int i=1; i<=n; ++i){
    if(i == 1){
      for(int j=1; j<=3; ++j){
        if(j<=m) ans.push_back(P(1,j));
      }
    }else if(i%2){
      for(int j=-2; j<=2; ++j){
        if(i+j <= m) ans.push_back(P(i,i+j));
        else if(j == -2) ans.push_back(P(i,m));
      }
    }else{
      for(int j=-1; j<=1; ++j){
        if(i+j <= m) ans.push_back(P(i,i+j));
        else if(j == -1) ans.push_back(P(i,m));
      }
    }
  }
  cout << ans.size() << endl;
  if(!sp){
    for(int i=0; i<(int)ans.size(); ++i){
      cout << ans[i].first << " " << ans[i].second << endl;
    }
  }else{
    for(int i=0; i<(int)ans.size(); ++i){
      cout << ans[i].second << " " << ans[i].first << endl;
    }
  }
}