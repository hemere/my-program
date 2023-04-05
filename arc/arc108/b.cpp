//問題:https://atcoder.jp/contests/arc108/tasks/arc108_b
//提出:https://atcoder.jp/contests/arc108/submissions/18276631
//2020-11-21AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  string s;
  cin >> n >> s;
  int ans = n;
  stack<int> stk;
  for(int i=0; i<n; ++i){
    if(i<n-2 && s[i] == 'f' && s[i+1] == 'o' && s[i+2] == 'x'){
      ans -= 3;
      //cout << i << ":foxHIT" << endl;
      i += 2;
    }else if(i<n-1 && s[i] == 'f' && s[i+1] == 'o'){
      stk.push(1);
      ++i;
    }else if(s[i] == 'f'){
      stk.push(0);
    }else if(i<n-1 && s[i] == 'o' && s[i+1] == 'x' && !stk.empty() && stk.top() == 0){
      stk.pop();
      ans -= 3;
      //cout << i << ":f-oxHIT" << endl;
      ++i;
    }else if(s[i] == 'o' && !stk.empty() && stk.top() == 0){
      stk.pop();
      stk.push(1);
    }else if(s[i] == 'x' && !stk.empty() && stk.top() == 1){
      stk.pop();
      ans -= 3;
      //cout << i << ":fo-xHIT" << endl;
    }else{
      stk = {};
    }
    //cout << i << ":" << stk.size() << endl;
  }
  cout << ans << endl;
}