#include <bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin >> s;
    int n = s.size();
    set<char> s0;
    for(int i=0; i<n; i++){
        s0.insert(s[i]);
    }
    if(s0.size()%2){
        cout << "IGNORE HIM!" ;
    }
    else{
        cout << "CHAT WITH HER!";
    }
    return 0;
}
