//問題:https://atcoder.jp/contests/arc136/tasks/arc136_b
//提出:https://atcoder.jp/contests/arc136/submissions/31801872
//2022-05-19AC
#include <bits/stdc++.h>
using namespace std;

struct BIT{
  int n;
  vector<long long> d;
  BIT(int x){
    n = x;
    d.resize(x+1,0);
  }
  void add(int x, long long y){
    if(x == 0) return;
    for(int i=x; i<=n+1; i+=(i&-i)){
      d[i] += y;
    }
  }
  long long sum(int x){
    if(x == 0) return 0;
    long long rt = 0;
    for(int i=x; i>0; i-=(i&-i)){
      rt += d[i];
    }
    return rt;
  }
};

int main(){
  int n;
  cin >> n;
  vector<int> an(n), bn(n);
  vector<vector<int>> cnt(5001,vector<int>(0)); 
  for(int i=0; i<n; ++i){
    cin >> an[i];
    cnt[an[i]].push_back(i+1);
  }
  BIT bt(5001);
  int anscnt = 0;
  bool ok = false;
  for(int i=0; i<n; ++i){
    cin >> bn[i];
    int sz = cnt[bn[i]].size();
    if(sz == 0){
      cout << "No" << endl;
      return 0;
    }else if(sz > 1) ok = true;
    int num = cnt[bn[i]][sz-1];
    //cout << i << ":" << num << " " << i -bt.sum(num) << endl;
    anscnt += i -bt.sum(num);
    bt.add(num,1);
    cnt[bn[i]].pop_back();
  }
  if(ok || anscnt%2 == 0) cout << "Yes" << endl;
  else cout << "No" << endl;
}