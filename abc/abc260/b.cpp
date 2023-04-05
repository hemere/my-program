//問題:https://atcoder.jp/contests/abc260/tasks/abc260_b
//提出:https://atcoder.jp/contests/abc260/submissions/33654441
//2022-07-31AC
#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
  int n, x, y, z;
  cin >> n >> x >> y >> z;
  vector<P> xn(n), yn(n), zn(n);
  for(int i=0; i<n; ++i) cin >> xn[i].first;
  for(int i=0; i<n; ++i) cin >> yn[i].first;
  for(int i=0; i<n; ++i){
    zn[i].first = xn[i].first +yn[i].first;
    xn[i].second = n-i;
    yn[i].second = n-i;
    zn[i].second = n-i;
  }
  vector<bool> passed(n,false);
  sort(xn.rbegin(),xn.rend());
  sort(yn.rbegin(),yn.rend());
  sort(zn.rbegin(),zn.rend());
  for(int i=0; i<x; ++i){
    int num = n-xn[i].second;
    //cout << "x:" << num << endl;
    passed[num] = true;
  }
  for(int i=0; i<y; ++i){
    int num = n-yn[i].second;
    //cout << "y:" << num << endl;
    if(passed[num]) ++y;
    else passed[num] = true;
  }
  for(int i=0; i<z; ++i){
    int num = n-zn[i].second;
    //cout << "z:" << num << endl;
    if(passed[num]) ++z;
    else passed[num] = true;
  }
  for(int i=0; i<n; ++i){
    if(passed[i]) cout << i+1 << endl;
  }
}