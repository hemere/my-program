//問題:https://atcoder.jp/contests/arc137/tasks/arc137_b
//提出:https://atcoder.jp/contests/arc137/submissions/30234039
//2022-03-19AC
#include <bits/stdc++.h>
using namespace std;

int main(){
  int n;
  cin >> n;
  int zerocnt = 0, onecnt = 0;
  int minone = 0, minzero = 0;
  int ansone = 0, anszero = 0;
  for(int i=0; i<n; ++i){
    int ai;
    cin >> ai;
    if(ai){
      ++onecnt;
      if(onecnt - zerocnt + minone> ansone){
        ansone = onecnt - zerocnt + minone;
      }
      if(onecnt - zerocnt > minzero){
        minzero = onecnt - zerocnt;
      }
    }else{
      ++zerocnt;
      if(zerocnt - onecnt + minzero> anszero){
        anszero = zerocnt - onecnt + minzero;
      }
      if(zerocnt - onecnt > minone){
        minone = zerocnt - onecnt;
      }
    }
  }
  cout << ansone + anszero + 1 << endl;
}