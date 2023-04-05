//問題:https://atcoder.jp/contests/abc294/tasks/abc294_c
//提出:https://atcoder.jp/contests/abc294/submissions/39857092
//2023-03-19AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<int> an(n), bm(m);
    for(int i=0; i<n; ++i) cin >> an[i];
    for(int i=0; i<m; ++i) cin >> bm[i];
    vector<int> ansa(n), ansb(m);
    int la = 0, lb = 0;
    int cnt = 1;
    while(la < n || lb < m){
        if(la < n && lb < m && an[la] < bm[lb]){
            ansa[la] = cnt;
            ++la;
        }else if(la < n && lb < m && an[la] > bm[lb]){
            ansb[lb] = cnt;
            ++lb;
        }else if(la == n){
            ansb[lb] = cnt;
            ++lb;
        }else{
            ansa[la] = cnt;
            ++la;
        }
        ++cnt;
    }
    for(int i=0; i<n; ++i){
        cout << ansa[i] << " ";
    }
    cout << endl;
    for(int i=0; i<m; ++i){
        cout << ansb[i] << " ";
    }
    cout << endl;
}