#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int avg = n, a = n-1;
    int res = 2;
    
    cout << res << endl;
    
    for(int i=0; i<n-1; i++){
        cout << a << " " << avg << endl;
        avg = round((a+avg)/2.0);
        a--;
        
    }
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
