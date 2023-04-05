//問題:https://atcoder.jp/contests/abc286/tasks/abc286_e
//提出:https://atcoder.jp/contests/abc286/submissions/38223256
//2023-01-21AC
#include <bits/stdc++.h>
using namespace std;
using ll = long long;
using P = pair<ll,int>;

int main(){
    int n;
    cin >> n;
    vector<int> an(n);
    for(int i=0; i<n; ++i) cin >> an[i];
    vector<string> sn(n);
    for(int i=0; i<n; ++i) cin >> sn[i];
    vector<vector<int>> ans_cnt(n,vector<int>(n,-1));
    vector<vector<ll>> ans_tot(n,vector<ll>(n,-1));
    for(int i=0; i<n; ++i){
        priority_queue<P> que1, que2;
        que1.push(P(an[i],i));
        vector<bool> ok(n,true);
        int cnt = 0;
        while(!que1.empty() || !que2.empty()){
            bool bl = false;
            while(!que1.empty()){
                ll ntot;
                int ni;
                tie(ntot,ni) = que1.top();
                que1.pop();
                //cout << "*" << ntot << " " << ni << endl;
                if(!ok[ni]) continue;
                ok[ni] = false;
                ans_cnt[i][ni] = cnt;
                ans_tot[i][ni] = ntot;
                for(int j=0; j<n; ++j){
                    if(sn[ni][j] == 'N' || !ok[j]) continue;
                    que2.push(P(ntot+an[j],j));
                }
            }
            if(bl) break;
            swap(que1,que2);
            ++cnt;
        }
    }   
    int q;
    cin >> q;
    for(int i=0; i<q; ++i){
        int ui, vi;
        cin >> ui >> vi;
        --ui; --vi;
        if(ans_cnt[ui][vi] == -1) cout << "Impossible" << endl;
        else cout << ans_cnt[ui][vi] << " " << ans_tot[ui][vi] << endl;
    }
}