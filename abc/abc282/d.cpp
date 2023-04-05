//問題:https://atcoder.jp/contests/abc282/tasks/abc282_d
//提出:https://atcoder.jp/contests/abc282/submissions/37351639
//2022-12-17AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;
    cin >> n >> m;
    vector<vector<int>> v(n,vector<int>(0));
    for(int i=0; i<m; ++i){
        int ui, vi;
        cin >> ui >> vi;
        --ui;
        --vi;
        v[ui].push_back(vi);
        v[vi].push_back(ui);
    }
    vector<int> color(n,-1);
    long long ans = 0;
    int mln = n;
    for(int i=0; i<n; ++i){
        if(color[i] != -1) continue;
        queue<int> que;
        que.push(i);
        color[i] = 0;
        int cl0cnt = 1, cl1cnt = 0, ncnt = 0;;
        int pound = 0;
        while(!que.empty()){
            int ni = que.front();
            que.pop();
            ++pound;
            for(int ai:v[ni]){
                ++ncnt;
                if(color[ai] == -1){
                    if(color[ni] == 0){
                        color[ai] = 1;
                        ++cl1cnt;
                    }else{
                        color[ai] = 0;
                        ++cl0cnt;
                    }
                    que.push(ai);
                }else if(color[ai] == color[ni]){
                    cout << 0 << endl;
                    return 0;
                }
            }
        }
        ncnt /= 2;
        ans += (long long)cl0cnt * cl1cnt -ncnt;
        ans += (long long)(mln-pound) * pound;
        mln -= pound;
        //cout << i << ":" << pound << endl;
    }
    cout << ans << endl;
}