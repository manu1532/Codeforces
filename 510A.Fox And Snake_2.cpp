#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> m >> n;
    
    for(int i=0; i<m; i++){
        if(i%4 == 0 || i%4 == 2){
            // print_hash(n);
            for(int j=0; j<n; j++){
                cout << "#";
            }
            cout << "\n";
        }
        else if(i%4 == 1){
            for(int j=0; j<n-1; j++){
                cout << ".";
            }
            cout << "#\n";
        }
        else{
            cout << "#";
            for(int j=0; j<n-1; j++){
                cout << ".";
            }
            cout << "\n";
        }
    }
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
