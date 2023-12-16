#include <bits/stdc++.h>
using namespace std;
#define all(v) (v).begin(), (v).end()
void solve(){
    // vector<vector<int>> v(5, vector<int> (5));
    int cell, row, col;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin >> cell;
            if(cell == 1){
                row = i+1;
                col = j+1;
            }
        }
    }
    // cout << row << " " << col << endl;
    int res = abs(row-3) + abs(col-3);
    cout << res << endl;
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
