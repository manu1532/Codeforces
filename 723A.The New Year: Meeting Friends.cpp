#include <bits/stdc++.h>
using namespace std;
bool comp1(int a, int b){
    if(a < b){
        return 1;
    }
    return 0;
}
bool comp2(int a, int b){
    if(a < b){
        return 1;
    }
    return 0;
}
void solve(){
    int x1, x2, x3;
    cin >> x1 >> x2 >> x3;
    int mi, mx;
    mi = min({x1,x2,x3}, comp1);
    mx = max({x1,x2,x3}, comp2);
    // cout << mi << " " << mx << endl;
    cout << mx-mi << endl;
    return ;
}
int main(){
    int t = 1;
    // cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
