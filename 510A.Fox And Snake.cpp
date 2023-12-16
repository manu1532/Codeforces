#include <bits/stdc++.h>
using namespace std;

void print_hash(int n){
    while(n--){
        printf("#");
    }
    cout << "\n";
}

void print_left_hash(int n){
    printf("#");
    n--;
    while(n--){
        printf(".");
    }
    cout << "\n";
}

void print_right_hash(int n){
    n--;
    while(n--){
        printf(".");
    }
    printf("#");
    cout << "\n";
}

void solve(){
    int m, n;
    cin >> m >> n;
    
    int flag = 1;
    
    for(int i=0; i<m; i++){
        if(i%2 == 0){
            print_hash(n);
        }
        else{
            if(flag){
                print_right_hash(n);
                flag = 0;
            }
            else{
                print_left_hash(n);
                flag = 1;
            }
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
