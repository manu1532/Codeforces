#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;

    int layers = 0;
    int cubes = 0;

    while(cubes <= n){
        layers++;
        cubes += layers*(layers+1)/2;
    }

    cout << layers-1 << endl;

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
