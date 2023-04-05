//問題:https://atcoder.jp/contests/abc279/tasks/abc279_f
//提出:https://atcoder.jp/contests/abc279/submissions/36915550
//2022-12-01AC
#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, q;
    cin >> n >> q;
    vector<vector<int>> box(n);
    for(int i=0; i<n; ++i) box[i].push_back(i);
    int boll_cnt = n;
    vector<int> boll_pos(1000000);
    for(int i=0; i<1000000; ++i) boll_pos[i] = i;
    vector<int> box_num(n), box_num_ref(n);
    for(int i=0; i<n; ++i){
        box_num[i] = i;
        box_num_ref[i] = i;
    }
    for(int i=0; i<q; ++i){
        int q1, q2, q3;
        cin >> q1;
        if(q1 == 1){
            cin >> q2 >> q3;
            --q2; --q3;
            q2 = box_num_ref[q2];
            q3 = box_num_ref[q3];
            if(box[q2].size() < box[q3].size()){
                swap(box_num[q2],box_num[q3]);
                swap(box_num_ref[box_num[q2]], box_num_ref[box_num[q3]]);
                swap(q2,q3);
            }
            for(int a:box[q3]){
                boll_pos[a] = q2;
                box[q2].push_back(a);
            }
            box[q3] = {};
        }else if(q1 == 2){
            cin >> q2;
            --q2;
            q2 = box_num_ref[q2];
            box[q2].push_back(boll_cnt);
            boll_pos[boll_cnt] = q2;
            ++boll_cnt;
        }else{
            cin >> q2;
            --q2;
            cout << box_num[boll_pos[q2]]+1 << endl;
        }
    /*
    for(int i=0; i<n; ++i){
        cout << "box" << box_num[i] << ":";
        for(int a:box[i]) cout << a << " ";
        cout << endl;
    }
    cout << endl;
    */
    }
}