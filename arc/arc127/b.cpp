//問題:https://atcoder.jp/contests/arc127/tasks/arc127_b
//提出:https://atcoder.jp/contests/arc127/submissions/31958437
//2022-05-26AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, l;
  cin >> n >> l;
  int num = 2;
  int m_l = l-1;
  while(m_l){num *= 3; m_l--;}
  for(int i=0; i<n; ++i){
    int numi = num + i;
    vector<int> ni(l);
    for(int j=0; j<l; ++j){
      //cout << l-1-j << " " << numi%3 << endl;
      ni[l-1-j] = numi%3;
      numi /= 3;
    }
    for(int j=0; j<l; ++j) cout << ni[j];
    cout << endl;
    for(int j=0; j<l; ++j) cout << (ni[j] +1)%3;
    cout << endl;
    for(int j=0; j<l; ++j) cout << (ni[j] +2)%3;
    cout << endl;
  }
}