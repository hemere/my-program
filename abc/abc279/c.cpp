//問題:https://atcoder.jp/contests/abc279/tasks/abc279_c
//提出:https://atcoder.jp/contests/abc279/submissions/36811155
//22022-11-26AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int h, w;
  cin >> h >> w;
  vector<string> shw(h), thw(h);
  for(int i=0; i<h; ++i) cin >> shw[i];
  for(int i=0; i<h; ++i) cin >> thw[i];
  vector<string> m_shw(w), m_thw(w);
  for(int i=0; i<w; ++i){ //for(int j=0; j<w; ++j) m_shw[j][i] = shw[i][j];
    string ns = "";
    for(int j=0; j<h; ++j){
      ns.push_back(shw[j][i]);
    }
    m_shw[i] = ns;
  }
  for(int i=0; i<w; ++i){
    string ns = "";
    for(int j=0; j<h; ++j){
      ns.push_back(thw[j][i]);
    }
    m_thw[i] = ns;
  }
  sort(m_shw.begin(),m_shw.end());
  sort(m_thw.begin(),m_thw.end());
  for(int i=0; i<w; ++i) for(int j=0; j<h; ++j){
    if(m_shw[i][j] != m_thw[i][j]){
      cout << "No" << endl;
      return 0;
    }
  }
  cout << "Yes" << endl;
}