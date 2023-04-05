//問題:https://atcoder.jp/contests/arc134/tasks/arc134_b
//提出:https://atcoder.jp/contests/arc134/submissions/28864384
//2022-01-29AC
#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int l=0, r=n-1;
  char c = 'a';
  vector<P> v(0);
  while(l < r){
    while(s[l] == c) ++l;
    for(int i=r; i>l; --i){
      if(s[i] == c){
        v.push_back(P(l,i));
        r = i-1;
        ++l;
        while(s[l] == c) ++l;
      }
    }
    ++c;
  }
  for(int i=0; i<(int)v.size(); ++i){
    char x = s[v[i].first];
    s[v[i].first] = s[v[i].second];
    s[v[i].second] = x;
  }
  cout << s << endl;
}