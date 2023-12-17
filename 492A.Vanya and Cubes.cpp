#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int layers = 0;
    int cubes = 0, i=1;
    
    while(1){
        cubes = i*(i+1)/2;
        if(cubes <= n){
            layers++;
        }
        else{
            break;
        }
        n = n-cubes;
        i++;
    }
    
    cout << layers << endl;
    
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
