#include <bits/stdc++.h>
using namespace std;
void solve(){
    int n;
    cin >> n;
    string s;
    int x = 0;
    while(n--){
        cin >> s;
        if(s == "++X" or s == "X++"){
            x++;
        }
        else{
            x--;
        }
    }
    cout << x << endl;
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
