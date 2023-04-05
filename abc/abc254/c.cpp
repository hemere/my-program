//問題:https://atcoder.jp/contests/abc254/tasks/abc254_c
//提出:https://atcoder.jp/contests/abc254/submissions/32215087
//2022-06-04AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  cin >> n >> k;
  vector<int> an(n);
  for(int i; i<n; ++i) cin >> an[i];
  vector<int> mlan = an;
  sort(mlan.begin(),mlan.end());
  for(int i=0; i<k; ++i){
    map<int,int> mp;
    for(int j=0; j*k+i<n; ++j){
      mp[an[j*k+i]]++;
      mp[mlan[j*k+i]]--;
    }
    for(auto p:mp){
      if(p.second != 0){
        cout << "No" << endl;
        return 0;
      }
    }
  }
  cout << "Yes" << endl;
}