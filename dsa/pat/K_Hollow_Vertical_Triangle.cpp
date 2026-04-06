#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    for(int i = 1; i <= n; i++){
        if(i == 1){
            cout << "*\n";
        }
        else if(i == 2){
            cout << "* *\n";
        }
        else{
            cout << "*";
            for(int j = 1; j <= 2*i - 3; j++){
                cout << " ";
            }
            cout << "*\n";
        }
    }

    for(int i = n - 1; i >= 1; i--){
        if(i == 1){
            cout << "*\n";
        }
        else if(i == 2){
            cout << "* *\n";
        }
        else{
            cout << "*";
            for(int j = 1; j <= 2*i - 3; j++){
                cout << " ";
            }
            cout << "*\n";
        }
    }

    return 0;
}
