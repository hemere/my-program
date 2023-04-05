//問題:https://atcoder.jp/contests/agc049/tasks/agc049_a
//提出:https://atcoder.jp/contests/agc049/submissions/18094614
//TLE
#include <bits/stdc++.h>
using namespace std;

double f(vector<string> &s, int pos, vector<bool> ok){
  ok[pos] = false;
  double ans = 0;
  int cnt = 0;
  vector<int> v;
  for(int i=0; i<(int)s.size(); ++i){
    if(s[pos][i] == '0' && ok[i]){
      ++cnt;
      v.push_back(i);
    }else{
      ok[i] = false;
    }
  }
  if(cnt == 0) return 1;
  for(int a: v){
    ans += f(s,a,ok);
  }
  ans /= cnt;
  //cout << pos << " " << ans << endl;
  return ans+1;
}

void bfs(vector<string> &s, int pos){
  queue<int> que;
  que.push(pos);
  vector<bool> ok(s.size(), true);
  while(!que.empty()){
    int x = que.front();
    que.pop();
    if(!ok[x]) continue;
    ok[x] = false;
    for(int i=0; i<(int)s.size(); ++i){
      if(s[x][i] == '1' && ok[i]){
        que.push(i);
        s[pos][i] = '1';
      }
    }
  }
}

int main(){
  int n;
  cin >> n;
  vector<string> s(n);
  for(int i=0; i<n; ++i) cin >> s[i];
  for(int i=0; i<n; ++i) bfs(s,i);
  double ans = 0;
  for(int i=0; i<n; ++i){
    vector<bool> ok(n,true);
    ans += f(s,i,ok);
  }
  ans /= n;
  printf("%.10f\n",ans);
}