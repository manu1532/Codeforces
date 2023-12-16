#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int opinion;
    string verdict = "Easy";
    
    for(int i=0; i<n; i++){
        cin >> opinion;
        if(opinion == 1){
            verdict = "Hard";
            break;
        }
    }
    cout << verdict << endl;
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
