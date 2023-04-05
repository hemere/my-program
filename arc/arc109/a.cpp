//問題:https://atcoder.jp/contests/arc109/tasks/arc109_a
//提出:https://atcoder.jp/contests/arc109/submissions/18452322
//2020-11-28AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  if(x*2 <= y){
    if(b >= a){
      cout << x + (b-a)*2*x << endl;
    }else{
      cout << x + (a-b-1)*2*x << endl;
    }
  }else{
    if(b >= a){
      cout << x + (b-a)*y << endl;
    }else{
      cout << x + (a-b-1)*y << endl;
    }
  }
}