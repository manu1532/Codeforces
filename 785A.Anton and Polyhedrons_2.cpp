#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    map<string, int> val;
    int faces = 0;
    string s;
    
    val["Tetrahedron"] = 4;
    val["Cube"] = 6;
    val["Octahedron"] = 8;
    val["Dodecahedron"] = 12;
    val["Icosahedron"] = 20;
    
    while(n--){
        cin >> s;
        faces += val[s];
    }
    cout << faces << endl;
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
