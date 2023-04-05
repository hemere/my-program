//問題:https://atcoder.jp/contests/arc109/tasks/arc109_c
//提出:https://atcoder.jp/contests/arc109/submissions/18462432
//2020-11-28AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, k;
  string s;
  cin >> n >> k >> s;
  while(s.size() != 1 && k > 0){
    if(s.size()%2 == 1){
      s = s+s;
    }
    string ns;
    for(int i=0; i<(int)s.size(); i +=2){
      if(s[i] == 'R'){
        if(s[i+1] == 'R') ns += 'R';
        if(s[i+1] == 'S') ns += 'R';
        if(s[i+1] == 'P') ns += 'P';
      }
      if(s[i] == 'S'){
        if(s[i+1] == 'R') ns += 'R';
        if(s[i+1] == 'S') ns += 'S';
        if(s[i+1] == 'P') ns += 'S';
      }
      if(s[i] == 'P'){
        if(s[i+1] == 'R') ns += 'P';
        if(s[i+1] == 'S') ns += 'S';
        if(s[i+1] == 'P') ns += 'P';
      }
    }
    swap(s,ns);
    --k;
  }
  cout << s[0] << endl;
}