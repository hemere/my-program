#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, a, b;
    cin >> n >> a >> b;
    n %= a+b;
    if((n-a >= 0 && n-a < a) || (n-b >= 0 && n-b < a)){
        cout << "First" << endl;
    }else{
        cout << "Second" << endl;
    }
}