//問題:https://atcoder.jp/contests/abc280/tasks/abc280_b
//提出:https://atcoder.jp/contests/abc280/submissions/36959486
//2022-12-03AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> an(n);
    for(int i=0; i<n; ++i){
        cin >> an[i];
        if(i == 0) cout << an[0] << " ";
        else{
            cout << an[i]-an[i-1] << " ";
        }
    }
    cout << endl;
}