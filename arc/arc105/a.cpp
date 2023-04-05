//問題:https://atcoder.jp/contests/arc105/tasks/arc105_a
//提出:https://atcoder.jp/contests/arc105/submissions/17337387
//2020-10-11AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int a, b, c, d;
  cin >> a >> b >> c >> d;
  if(a+b == c+d || a+c == b+d || a+d == b+c
    || a == b+c+d || b == a+c+d || c == a+b+d || d == a+b+c){
    cout << "Yes" << endl;
  }else{
    cout << "No" << endl;
  }
}