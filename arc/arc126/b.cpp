//問題:https://atcoder.jp/contests/arc126/tasks/arc126_b
//提出:https://atcoder.jp/contests/arc126/submissions/26038705
//2021-09-22AC
#include <bits/stdc++.h>
using namespace std;
using P = pair<int,int>;
const int INF = 1001001001;

int main(){
  int n, m;
  cin >> n >> m;
  vector<P> ab(m);
  for(int i=0; i<m; ++i){
    int ai, bi;
    cin >> ai >> bi;
    ab[i] = make_pair(ai,-bi);
  }
  sort(ab.begin(),ab.end());
  vector<int> lis(m+5,INF);
  for(int i=0; i<m; ++i){
    auto it = lower_bound(lis.begin(),lis.end(),-ab[i].second);
    *it = -ab[i].second;
  }
  for(int i=0; i<m+5; ++i){
    if(lis[i] == INF){
      cout << i << endl;
      return 0;
    }
  }
}