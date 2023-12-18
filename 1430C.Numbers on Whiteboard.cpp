#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int b = n, a = n-1;
    int res = 2;
    
    cout << res << endl;
    
    for(int i=0; i<n-1; i++){
        cout << a << " " << b << endl;
        b = round((a+avg)/2.0);
        a = a-1;
        
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
