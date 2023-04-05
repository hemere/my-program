//問題:https://atcoder.jp/contests/abc254/tasks/abc254_f
//WA
#include <bits/stdc++.h>
using namespace std;
using ll = long long;

ll gcd(ll a, ll b){return a?gcd(b%a,a):b;}

struct Rgcdst{
  vector<int> d;
  int zero;
  Rgcdst(int sz){
    int x = 1;
    while(x < sz) x *= 2;
    zero = x;
    d.resize(x * 2, -1);
  }
  void gcdnum(int di, int num){
    di += zero;
    while(di >= 1){
      if(d[di] == -1) d[di] = num;
      else d[di] = gcd(num, d[di]);
      di /= 2;
    }
    return;
  }
  int rangcd(int l, int r){ //0-index,[l,r)
    if(l >= r) return -1;
    int x = -1;
    l += zero;
    r += zero;
    while(1){
      if(l %2 == 1){
        if(x == -1) x = d[l];
        else x = gcd(x, d[l]);
        ++l;
      }
      if(r %2 == 1){
        if(x == -1) x = d[r];
        else x = gcd(x, d[r-1]);
        --r;
      }
      if(l == r) break;
      l /= 2;
      r /= 2;
    }
    return x;
  }
};

int main(){
  int n, q;
  cin >> n >> q;
  vector<int> an(n), bn(n);
  Rgcdst g1(n), g2(n);
  for(int i=0; i<n; ++i){
    int an[i];
    cin >> an[i];
    if(i>0) g1.gcdnum(i-1,abs(an[i]-an[i-1]));
  }
  for(int i=0; i<n; ++i){
    int bn[i];
    cin >> bn[i];
    if(i>0) g2.gcdnum(i-1,abs(bn[i]-bn[i-1]));
  }
  for(int i=0; i<q; ++i){
    int h1, h2, w1, w2;
    cin >> h1 >> h2 >> w1 >> w2;
    --h1; --h2; --w1; --w2;
    int x, y;
    if(h1 == h2) x = an[h1];
    else x = g1.rangcd(h1,h2);
    if(w1 == h2) y = bn[w1];
    else y = g2.rangcd(w1,w2);
    cout << gcd(gcd(x,y), an[h1]+bn[w1]) << endl;
  }
}