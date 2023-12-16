#include <bits/stdc++.h>
using namespace std;

void solve(){
    int n;
    cin >> n;
    
    int faces = 0;
    string s;
    
    while(n--){
        cin >> s;
        if(s == "Tetrahedron"){
            faces += 4;
        }
        else if(s == "Cube"){
            faces += 6;
        }
        else if(s == "Dodecahedron"){
            faces += 12;
        }
        else if(s == "Icosahedron"){
            faces += 20;
        }
        else{
            faces += 8;
        }
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
