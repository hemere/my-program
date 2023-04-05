//問題:https://atcoder.jp/contests/abc282/tasks/abc282_e
//NoSub
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using T = tuple<int,int,int>;

ll Ep(int x, int y, int &MOD){
  if(y == 0) return 1;
  if(y == 1) return x;
  ll r = Ep(x,y/2,MOD);
  if(y%2 == 1) return r *r%MOD *x%MOD;
  else return r *r%MOD;
}
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
    vector<int> an(n);
    for(int i=0; i<n; ++i) cin >> an[i];
    priority_queue<T> que;
    for(int i=0; i<n-1; ++i) for(int j=i+1; j<n; ++j){
        int x = Ep(an[i],an[j],m);
        que.push(T(x,i,j));
    }
    ll ans = 0;
    UnionFind uf(n);
    while(n>1){
        int xi, ai, bi;
        tie(xi,ai,bi) = que.top();
        que.pop();
        if(uf.find(ai) == uf.find(bi)) continue;
        uf.unite(ai,bi);
        ans += xi;
        --n;
    }
    cout << ans << endl;
}