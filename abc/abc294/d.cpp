//問題:https://atcoder.jp/contests/abc294/tasks/abc294_d
//提出:https://atcoder.jp/contests/abc294/submissions/39862987
//2023-03-19AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<bool> hn(n,true);
    int nxt = 0;
    vector<int> ans(0);
    for(int i=0; i<q; ++i){
        int q1, q2;
        cin >> q1;
        if(q1 == 2){
            cin >> q2;
            --q2;
            hn[q2] = false;
            if(q2 == nxt){
                while(nxt < n && !hn[nxt]) ++nxt;
            }
        }else if(q1 == 3){
            ans.push_back(nxt);
        }
    }
    for(int a:ans){
        cout << a+1 << endl;
    }
}