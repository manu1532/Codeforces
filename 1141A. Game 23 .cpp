#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n, m;
    cin >> n >> m;
    
    int cnt = 0;
    if(m%n != 0){
        cout << -1 << endl;
        return ;
    }
    m = m/n;
    
    while(1){
        if(m%2 == 0){
            cnt++;
            m = m/2;
        }
        else{
            break;
        }
    }
    
    while(1){
        if(m%3 == 0){
            cnt++;
            m = m/3;
        }
        else{
            break;
        }
    }
    
    if(m != 1){
        cout << -1 << endl;
        return ;
    }
    
    cout << cnt << endl;
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
