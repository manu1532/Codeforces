#include <bits/stdc++.h>
using namespace std;
void solve(){
    int a, b, n;
    cin >> a >> b >> n;
    int cnt = 0;
    while(a<=n && b<=n){
        if(a<=b){
            a = a+b;
        }
        else{
            b = a+b;
        }
        cnt ++;
    }
    cout << cnt << endl;
    return ;
}
int main(){
    int t;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
