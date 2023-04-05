//問題:https://atcoder.jp/contests/arc140/tasks/arc140_c
//提出:https://atcoder.jp/contests/arc140/submissions/31726709
//2022-05-15AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n, x;
  cin >> n >> x;
  if(n%2 == 1 && x == n/2 +1){
    for(int i=0; i<n; ++i){
      int xi = n/2 +1 +(i+1)/2 *(i%2?1:-1);
      if(i != n-1)cout << xi << " ";
      else cout << xi << endl;
    }
  }else if(n%2 == 0 && x == n/2){
    for(int i=0; i<n; ++i){
      int xi = n/2 +(i+1)/2 *(i%2?1:-1);
      if(i != n-1)cout << xi << " ";
      else cout << xi << endl;
    }
  }else if(n%2 == 0 && x == n/2 +1){
    for(int i=0; i<n; ++i){
      int xi = n/2 +1 +(i+1)/2 *(i%2?-1:1);
      if(i != n-1)cout << xi << " ";
      else cout << xi << endl;
    }
  }else if(n%2 == 0){
    if(x > n/2){
      cout << x << " ";
      for(int i=1; i<n; ++i){
        int xi = n/2 +i/2 *(i%2?-1:1);
        if(xi >= x) ++xi;
        if(i != n-1)cout << xi << " ";
        else cout << xi << endl;
      }
    }else{
      cout << x << " ";
      for(int i=1; i<n; ++i){
        int xi = n/2 +1 +i/2 *(i%2?1:-1);
        if(xi <= x) --xi;
        if(i != n-1)cout << xi << " ";
        else cout << xi << endl;
      }
    }
  }else{
    if(x > n/2){
      cout << x << " ";
      for(int i=1; i<n; ++i){
        int xi = n/2 +i/2 *(i%2?-1:1);
        if(xi >= x) ++xi;
        if(i != n-1)cout << xi << " ";
        else cout << xi << endl;
      }
    }else{
      cout << x << " ";
      for(int i=1; i<n; ++i){
        int xi = n/2 +1 +i/2 *(i%2?-1:1);
        if(xi <= x) --xi;
        if(i != n-1)cout << xi << " ";
        else cout << xi << endl;
      }
    }
  }
}