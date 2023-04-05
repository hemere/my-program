//問題:https://atcoder.jp/contests/abc294/tasks/abc294_a
//提出:https://atcoder.jp/contests/abc294/submissions/39844130
//2023-03-19AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;
    vector<int> an(0);
    for(int i=0; i<n; ++i){
        int ai;
        cin >> ai;
        if(ai%2 == 0) an.push_back(ai);
    }
    for(int x:an){
        cout << x << " ";
    }
    cout << endl;
}