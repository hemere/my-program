//問題:https://atcoder.jp/contests/arc131/tasks/arc131_c
//提出:https://atcoder.jp/contests/arc131/submissions/31756837
//2022-05-17AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int ans = 0;
  vector<int> an(n);
  for(int i=0; i<n; ++i){
    cin >> an[i];
    ans ^= an[i];
  }
  for(int i=0; i<n; ++i){
    if(an[i] == ans){
      cout << "Win" << endl;
      return 0;
    }
  }
  if(n%2){
    cout << "Win" << endl;
  }else{
    cout << "Lose" << endl;
  }
}