//問題:https://atcoder.jp/contests/arc140/tasks/arc140_b
//提出:https://atcoder.jp/contests/arc140/submissions/31723319
//2022-05-15AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int evencnt = 1;
  priority_queue<int,vector<int>,greater<int>> que;
  for(int i=0; i<n-2; ++i){
    if(s[i] == 'A' && s[i+1] == 'R' && s[i+2] == 'C'){
      int l = i-1, r = i+3;
      int cnt = 0;
      while(l>=0 && r<n && s[l] == 'A' && s[r] == 'C'){++cnt; --l; ++r;}
      if(cnt == 0) evencnt++;
      else que.push(cnt);
    }
  }
  int ans = -1;
  while(!que.empty()){
    int nx = que.top();
    que.pop();
    if(nx <= evencnt){
      ans += nx*2;
      evencnt -= nx-1;
    }else{
      ans += evencnt*2;
      evencnt = 1;
    }
  }
  ans += evencnt;
  cout << ans << endl;
}