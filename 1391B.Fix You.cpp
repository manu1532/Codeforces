#include <bits/stdc++.h>
using namespace std;

void solve(){
    int m, n;
    cin >> n >> m;
    vector<vector<char > > v(n, vector<char>(m));
    
    int cnt = 0;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cin >> v[i][j];
        }
    }
    for(int j=0; j<m; j++){
        if(v[n-1][j] == 'D'){
            cnt++;
        }
    }
    for(int i=0; i<n; i++){
        if(v[i][m-1] == 'R'){
            cnt++;
        }
    }
    
    cout << cnt << endl;
    
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
