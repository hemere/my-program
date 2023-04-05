//問題:https://atcoder.jp/contests/arc107/tasks/arc107_c
//提出:https://atcoder.jp/contests/arc107/submissions/17757423
//2020-10-31AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
const int MOD = 998244353;

struct UnionFind{
  vector<int> d;
  UnionFind(int n){
    d.resize(n,-1);
  }
  int find(int x){
    if(d[x] < 0) return x;
    return d[x] = find(d[x]);
  }
  void unite(int x, int y){
    x = find(x);
    y = find(y);
    if(x == y) return;
    if(d[x] > d[y]) swap(x,y);
    d[x] += d[y];
    d[y] = x;
    return;
  }
  int size(int x){return -d[find(x)];}
};

int main(){
  int n, kk;
  cin >> n >> kk;
  vector<ll> d(51);
  d[1] = 1;
  for(int i=2; i<51; ++i){
    d[i] = d[i-1] * i %MOD;
  }
  vector<vector<int>> aij(n, vector<int>(n));
  for(int i=0; i<n; ++i) for(int j=0; j<n; ++j) cin >> aij[i][j];
  UnionFind uf1(n);
  for(int i=0; i<n-1; ++i) for(int j=i+1; j<n; ++j){
    bool ok = true;
    for(int k=0; k<n; ++k){
      if(aij[i][k] + aij[j][k] > kk){
        ok = false;
        break;
      }
    }
    if(ok) uf1.unite(i, j);
  }
  UnionFind uf2(n);
  for(int i=0; i<n-1; ++i) for(int j=i+1; j<n; ++j){
    bool ok = true;
    for(int k=0; k<n; ++k){
      if(aij[k][i] + aij[k][j] > kk){
        ok = false;
        break;
      }
    }
    if(ok) uf2.unite(i, j);
  }
  ll ansx = 1;
  vector<bool> used1(n, true);
  for(int i=0; i<n; ++i){
    if(used1[uf1.find(i)]){
      ansx *= d[uf1.size(i)];
      ansx %= MOD;
      used1[uf1.find(i)] = false;
    }
  }
  ll ansy = 1;
  vector<bool> used2(n, true);
  for(int i=0; i<n; ++i){
    if(used2[uf2.find(i)]){
      ansy *= d[uf2.size(i)];
      ansy %= MOD;
      used2[uf2.find(i)] = false;
    }
  }
  cout << ansx * ansy %MOD << endl;
}