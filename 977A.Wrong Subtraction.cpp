#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, k;
    cin >> n >> k;
    while(k--){
        if(n%10 == 0){
            n = n/10;
        }
        else{
            n--;
        }
    }
    cout << n << endl;
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
