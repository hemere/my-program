//問題:https://atcoder.jp/contests/arc106/tasks/arc106_c
//提出:https://atcoder.jp/contests/arc106/submissions/17625611
//2020-10-24AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, m;
  cin >> n >> m;
  if(n == 1 && m == 0){
    cout << 1 << " " << 2 << endl;
    return 0;
  }
  if(m > n-2 || m < 0){
    cout << -1 << endl;
    return 0;
  }
  for(int i=0; i<n; ++i){
    if(i == n-1){
      if(m == 0) printf("%d %d\n",i*3+2,i*3+3);
      else printf("%d %d\n",i*3-2-3*m,i*3+3);
    }else{
      printf("%d %d\n",i*3+2,i*3+3);
    }
  }
}