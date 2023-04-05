//問題:https://atcoder.jp/contests/arc106/tasks/arc106_b
//提出:https://atcoder.jp/contests/arc106/submissions/17616395
//2020-10-24AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

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
  int n, m;
  cin >> n >> m;
  vector<int> an(n), bn(n);
  for(int i=0; i<n; ++i) cin >> an[i];
  for(int i=0; i<n; ++i) cin >> bn[i];
  UnionFind uf(n);
  for(int i=0; i<m; ++i){
    int ci, di;
    cin >> ci >> di;
    --ci; --di;
    uf.unite(ci,di);
  }
  vector<ll> sum1(n,0), sum2(n,0);
  for(int i=0; i<n; ++i){
    int x = uf.find(i);
    sum1[x] += an[i];
    sum2[x] += bn[i];
  }
  for(int i=0; i<n; ++i){
    if(sum1[i] != sum2[i]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}