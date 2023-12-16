#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int cnt = 0;
    int row = n%10;
    
    while(n){
        cnt ++;
        n = n/10;
    }
    
    int ans = (row-1)*10 + cnt*(cnt+1)/2;
    
    cout << ans << endl;
    
    return ;
}

int main(){
    int t = 1;
    cin >> t;
    while(t--){
        solve();
    }
    return 0;
}
