#include <bits/stdc++.h>
using namespace std;

void solve(){
    string n;
    cin >> n;
    
    int cnt = n.size();
    int row = n[0]-'0';
    
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
